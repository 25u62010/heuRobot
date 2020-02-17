#include "heuRobocon.h"
#include <QUdpSocket>
#include "qhostaddress.h"
#include "qvalidator.h"
#include <QTextCodec>
#include <QDebug>
#include <qdatetime.h>
#include <QVector>
#include <dataFormat.h>
#include <qdir.h>
#include <qfiledialog.h>
#include <qdialog.h>
#include <QAxObject.h>
#include <cmath>
#include <painter.h>
#include <qlist.h>
#include <qstringlist.h>
#include <excelThread.h>
#include "excelRecordManger.h"
#include "QRegExp"
#include <qcursor.h>

heuRobocon::heuRobocon(QWidget *parent)
	: QMainWindow(parent)
{
	QDoubleValidator *v = new QDoubleValidator(this);
	ui.setupUi(this);
	ui.Kp->setValidator(v);
	ui.Ki->setValidator(v);
	ui.Kd->setValidator(v);
	ui.targetEdit->setValidator(v);
	QIntValidator *v2 = new QIntValidator(0, 255);
	ui.ip1->setValidator(v2);
	ui.ip2->setValidator(v2);
	ui.ip3->setValidator(v2);
	ui.ip4->setValidator(v2);
	QIntValidator *v3 = new QIntValidator(0, 999999);
	ui.port->setValidator(v3);
	clientudp = new QUdpSocket(this);
	clientudp->bind(1000);//绑定读数据端口(监听端口)，允许其他服务绑定到此端口
	connect(clientudp, SIGNAL(readyRead()), this, SLOT(recv()));
	connect(this, SIGNAL(sendPID(QVector<double>)), this, SLOT(changePID(QVector<double>)));
	ui.reciver->setReadOnly(true);
	ui.textEdit->setReadOnly(true);

	ui.toPaintList->setSelectionMode(QAbstractItemView::MultiSelection);
	ui.selectedList->setSelectionMode(QAbstractItemView::MultiSelection);
	m_Timer = new QTimer(this);
	m_Timer->start(10);
	qRegisterMetaType<QVector<QString>>("QVector<QString>");
	ui.pidRecordTable->setColumnWidth(0, 60);
	ui.pidRecordTable->setColumnWidth(1, 80);
	ui.pidRecordTable->setColumnWidth(2, 80);
	ui.pidRecordTable->setColumnWidth(3, 80);
	ui.pidRecordTable->setColumnWidth(4, 80);
	int width =900;
	width -= 380;
	width /= 3;
	ui.pidRecordTable->setColumnWidth(4, width + 1);
	ui.pidRecordTable->setColumnWidth(5, width + 1);
	ui.pidRecordTable->setColumnWidth(6, width + 1);
}
QHostAddress heuRobocon::getHostAddress()
{
	QHostAddress HostAddress;
	QString stringTemp;
	stringTemp = ui.ip1->text() + '.' + ui.ip2->text() + '.' + ui.ip3->text() + '.' + ui.ip4->text();
	HostAddress = QHostAddress(stringTemp);
	return HostAddress;
}
quint16 heuRobocon::getPort()
{
	return (quint16)ui.port->text().toInt();
}
void heuRobocon::on_IP1_changed()
{
	if (ui.ip1->text().toInt() > 255) {
		ui.ip1->setText("255");	
	}
	if (ui.ip1->text().count() > 2) {
		ui.ip2->setFocus();
	}
}
void heuRobocon::on_IP2_changed()
{
	if (ui.ip2->text().toInt() > 255) {
		ui.ip2->setText("255");
	}
	if (ui.ip2->text().count()> 2) {
		ui.ip3->setFocus();
	}
}
void heuRobocon::on_IP3_changed()
{
	if (ui.ip3->text().toInt() > 255) {
		ui.ip3->setText("255");
	}
	if (ui.ip3->text().count() > 2) {
		ui.ip4->setFocus();
	}
}
void heuRobocon::on_IP4_changed()
{
	if (ui.ip4->text().toInt() > 255) {
		ui.ip4->setText("255");
	}
	if (ui.ip4->text().count() > 2) {
		ui.port->setFocus();
	}
}
void heuRobocon:: on_sendButton_clicked()
{
	autoAbjustPIDRceordTable();
	typedef union{
		struct{
			HEURC_dataFormat::dataInfoDef dataInfo;
			double KpData;
			double KiData;
			double KdData;
		};
		uint8_t u8Data[32];
	} sendType;
	sendType sendData;
	QUdpSocket qus;
	QByteArray msg;
	QString temp;
	
	QTableWidgetItem *kpItem = new QTableWidgetItem(), 
					 *kiItem = new QTableWidgetItem(), 
					 *kdItem = new QTableWidgetItem(),
					 *pidIDItem = new QTableWidgetItem();
	
	
	if (currentRow+1 > ui.pidRecordTable->rowCount()) {
		ui.pidRecordTable->setRowCount(currentRow+1);
	}
	//header format:1111 1111 1011 1011
	sendData.dataInfo.header = 0XFFBB;
	//dataID format:1001 0001 XXXX XXXX
	sendData.dataInfo.dataID = (uint16_t)ui.pidNum->text().toInt() | 0x09 << 12 | 0x01 << 8;
	
	//sendData.dataInfo.dataID = (uint16_t)ui.pidNum->text().toInt() | 0x06 << 12 | 0x00 << 8;//调试所用
	sendData.dataInfo.dataType = HEURC_dataFormat::dataType_Double;

	sendData.dataInfo.dataNum = 0x0003;
	temp = ui.pidNum->text();
	ui.pidRecordTable->setCurrentCell(currentRow, 1);
	pidIDItem->setText(temp);
	ui.pidRecordTable->setItem(currentRow, 0, pidIDItem);
	temp = ui.Kp->text();
	sendData.KpData = temp.toDouble();
	if (temp.size() == 0) {
		temp = "0";
	}
	kpItem->setText(temp);
	
	ui.pidRecordTable->setItem(currentRow, 1, kpItem);

	temp = ui.Ki->text();
	sendData.KiData = temp.toDouble();
	if (temp.size() == 0) {
		temp = "0";
	}
	kiItem->setText(temp);
	ui.pidRecordTable->setItem(currentRow, 2, kiItem);

	temp = ui.Kd->text();
	sendData.KdData = temp.toDouble();
	if (temp.size() == 0) {
		temp = "0";
	}
	kdItem->setText(temp);
	ui.pidRecordTable->setItem(currentRow, 3, kdItem);

	currentRow++;

	for (int i = 0; i < 32; i++) {
		msg[i] = sendData.u8Data[i];
	}

	ui.textEdit->moveCursor(QTextCursor::End);
	QDateTime *dataTime = new QDateTime();
	ui.textEdit->insertPlainText(dataTime->currentDateTime().toString("yy-MM-dd HH:mm:ss "));

	ui.textEdit->insertPlainText(msg.toHex()+"\r\n");

	int TxNum = ui.TxNumLabel->text().toInt();
	ui.TxNumLabel->setText(QString::number(TxNum + msg.size()));
	qus.writeDatagram(msg, QHostAddress(getHostAddress()), getPort());
	
}
void heuRobocon::recv()
{
	typedef union {
		struct {
			double data;
		};
		uint8_t u8Data[8];
	} reciveMsgType;
	reciveMsgType reciveBuff;
	QByteArray data;
	QDateTime *dataTime = new QDateTime();
	uint16_t dataId;
	while (clientudp->hasPendingDatagrams())
	{
		data.resize(clientudp->pendingDatagramSize());
		clientudp->readDatagram(data.data(), data.size());
		ui.reciver->moveCursor(QTextCursor::End);
		ui.reciver->insertPlainText(dataTime->currentDateTime().toString("yy-MM-dd HH:mm:ss   "));
		int RxNum = ui.RxNumLabel->text().toInt();
		ui.RxNumLabel->setText(QString::number(RxNum+data.size()));
		//header format:1111 1111 1011 1011
		//dataID format:0110 aaaa XXXX XXXX (aaaa:mission number;)
		int format = ui.reciveFormatComboBox->currentIndex();
		QString strToDisplay;
		if (format == 1) {
			for (auto c : data) {
				strToDisplay.append(char(c));
			}
		}
		else if (format == 0) {
			strToDisplay=data.toHex();
		}
		dataId = data[3]<<8|data[2];
		if (data[0] != (char)0XBB|| data[1] != (char)0XFF||(dataId&0x6000)!=0x6000) {
			ui.reciver->setTextColor(QColor(255, 0, 0));		
			ui.reciver->insertPlainText(strToDisplay + "\r\n");
			break;
		}
		else {
			ui.reciver->insertPlainText(strToDisplay + "\r\n");
		}
		QVector<double> dataBuffer;
		switch (data[4]) {
		case HEURC_dataFormat::dataType_Double:
			dataBuffer=dataConvert<double>(data);
			break;
		case HEURC_dataFormat::dataType_Float:
			dataBuffer=dataConvert<float>(data);
			break;
		case HEURC_dataFormat::dataType_Int:
			dataBuffer=dataConvert<int>(data);
			break;
		case HEURC_dataFormat::dataType_Char:
			dataBuffer=dataConvert<char>(data);
			break;
		}
		switch ((dataId & 0x0f00) >> 8) {
		case  0x00:
			dataStore(dataBuffer, dataId&0xff, data[6]);//传递数据
			break;
		case 0x01:
			ui.pidNum->setValue((int)(dataId & 0xFF));
			emit sendPID(dataBuffer);//回传PID
			break;
		case 0x02:
			emit controlStartPaint();
		}

	}	
}
template <typename T>
	QVector<double> heuRobocon::dataConvert(const QByteArray data)
{
	uint16_t dataNum= data[6];
	uint16_t dataId = data[3] << 8 | data[2];
	QVector<double> dataBuffer;
	typedef union {
		struct {
			T data;
		};
		uint8_t u8Data[8];
	} reciveMsgType;
	reciveMsgType reciveBuff;
	for (int i = 0; i <= dataNum - 1; i++) {
		for (int j = 0; j < 8; j++) {
			reciveBuff.u8Data[j] = data[uint(8 + i * sizeof(T) + j)];
		}
		dataBuffer.append((double)reciveBuff.data);
	}
	return dataBuffer;
}
void heuRobocon::dataStore(QVector<double> dataBuffer, quint16 idStart, quint16 num)
{
	for (quint16 i = 0; i < num; i++){	
		quint16 dataId= idStart + i;
		double dataToStore = dataBuffer[i];
		std::map<quint16, int>::iterator it = dataStorge.find(idStart + i);
		if (it==dataStorge.end()) {//首次出现ID
			dataStorge[dataId] = 0;
			if (dataId < 0x80) {
				ui.selectedList->addItem("ID:" + QString::number(dataId));
			}
			else {
				ui.selectedList->addItem("targetID:" + QString::number(dataId-0x80));
			}
			ui.selectedList->sortItems();
		}
		else {
		}
		dataStorge[dataId]++;
		emit sendData(dataId, dataToStore);//发送数据至画图窗口
	}
}
void heuRobocon::on_generalSend_clicked()
{
	QByteArray msg;
	QUdpSocket qus;
	QString input= ui.sender->text();
	QDateTime *dataTime = new QDateTime();

	ui.textEdit->moveCursor(QTextCursor::End);
	ui.textEdit->insertPlainText(dataTime->currentDateTime().toString("yy-MM-dd HH:mm:ss   "));
	int format = ui.sendFormatComboBox->currentIndex();
	if (format == 0){
		int n = input.length() / 2;
		for (int i = 0; i < n; i++) {
			QString temp;
			temp.append(input[2 * i]);
			temp.append(input[2 * i + 1]);
			bool ok;
			msg.append(temp.toShort(&ok, 16));
			if (ok == false) {
				QMessageBox::information(NULL, "error", QStringLiteral("非十六进制字符串"),
					QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
				return;
			}
		}
	}
	else if (format == 1) {
		msg = input.toUtf8();
	}
	QString temp = msg.toHex();
	ui.textEdit->insertPlainText(temp+'\r\n');

	int TxNum = ui.TxNumLabel->text().toInt();
	ui.TxNumLabel->setText(QString::number(TxNum + msg.size()));

	qus.writeDatagram(msg, QHostAddress(getHostAddress()), getPort());	
}
void heuRobocon::on_readPIDButton_clicked()
{
	typedef union {
		struct {
			HEURC_dataFormat::dataInfoDef dataInfo;
		};
		uint8_t u8Data[sizeof(HEURC_dataFormat::dataInfoDef)];
	} sendType;
	sendType sendData;
	QUdpSocket qus;
	QByteArray msg;
	QDateTime *dataTime = new QDateTime();
	//header format:1111 1111 1011 1011
	sendData.dataInfo.header = 0XFFBB;

	sendData.dataInfo.dataType = HEURC_dataFormat::dataType_Char;
	//dataID format:1001 0000 XXXX XXXX
	sendData.dataInfo.dataID = (uint16_t)ui.pidNum->text().toInt() | 0x09 << 12;
	sendData.dataInfo.dataNum = 0x0000;
	msg.append(sendData.u8Data[0]);
	for (int i = 0; i < sizeof(HEURC_dataFormat::dataInfoDef); i++) {
		msg[i] = sendData.u8Data[i];
	}

	int TxNum = ui.TxNumLabel->text().toInt();
	ui.TxNumLabel->setText(QString::number(TxNum + msg.size()));

	qus.writeDatagram(msg, QHostAddress(getHostAddress()), getPort());

	ui.pidNum->setReadOnly(true);
	ui.Kp->setReadOnly(true);
	ui.Ki->setReadOnly(true);
	ui.Kd->setReadOnly(true);
	ui.textEdit->moveCursor(QTextCursor::End);
	ui.textEdit->insertPlainText(dataTime->currentDateTime().toString("yy-MM-dd HH:mm:ss   "));
	QString temp = msg.toHex();
	ui.textEdit->insertPlainText(temp + '\r\n');
}
void heuRobocon::changePID(QVector<double> pidData)
{
	ui.pidNum->setReadOnly(false);
	ui.Kp->setReadOnly(false);
	ui.Ki->setReadOnly(false);
	ui.Kd->setReadOnly(false);
	ui.Kp->setText(QString::number(pidData[0], 'g', 10));
	ui.Ki->setText(QString::number(pidData[1], 'g', 10));
	ui.Kd->setText(QString::number(pidData[2], 'g', 10));
}
void heuRobocon::on_exportPIDTableButton_clicked()
{
	saveTableDialog *saveTable=new saveTableDialog();
	connect(saveTable, SIGNAL(convertDir(QString)), this, SLOT(saveTable(QString)));
	saveTable->exec();
}
void heuRobocon::on_deleteRowButton_clicked()
{
	int index = ui.pidRecordTable->currentRow();
	ui.pidRecordTable->removeRow(index);
}
void heuRobocon::resizeEvent(QResizeEvent * event)
{
	autoAbjustPIDRceordTable();
}
void heuRobocon::saveTable(QString filepath)
{
	QList<QVariant> allRowsData;//保存所有行数据
	int rowNum, columnNum;
	allRowsData.clear();
	if (!filepath.isEmpty()) {
		QAxObject *excel = new QAxObject("Excel.Application");//连接Excel控件
		excel->dynamicCall("SetVisible (bool Visible)", false);//不显示窗体
		excel->setProperty("DisplayAlerts", true);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
		QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
		workbooks->dynamicCall("Add");//新建一个工作簿
		QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
		QAxObject *worksheets = workbook->querySubObject("Sheets");//获取工作表集合
		QAxObject *worksheet = worksheets->querySubObject("Item(int)", 1);//获取工作表集合的工作表1，即sheet1
		QString data = "";
		QTableWidgetItem *item;
		rowNum   = ui.pidRecordTable->rowCount();
		columnNum=  ui.pidRecordTable->columnCount();
		QList<QVariant> headerData;//保存一行数据
		headerData.append(QVariant(""));
		for (int column = 0; column < columnNum; column++){
			item = ui.pidRecordTable->takeHorizontalHeaderItem(column);
			if (item != nullptr) {
				data = item->text();
			}
			else {
				data = "";
			}
			headerData.append(QVariant(data));
		}
		allRowsData.append(QVariant(headerData));
		for (int row = 0; row < rowNum; row++)
		{		
			QList<QVariant> aRowData;//保存一行数据
			aRowData.append(QVariant(row));
			for (int column = 0; column < columnNum; column++)
			{
				item = ui.pidRecordTable->item(row, column);
				if (item != nullptr) {
					data = item->text();
				}
				else {
					data = "";
				}
				aRowData.append(QVariant(data));
			}
			allRowsData.append(QVariant(aRowData));
		}
		QAxObject *range = worksheet->querySubObject("Range(const QString )", QString("A1:G")+ QString::number(rowNum+1));
		range->dynamicCall("SetValue(const QVariant&)", QVariant(allRowsData));//存储所有数据到 excel 中,批量操作,速度极快
		range->setProperty("HorizontalAlignment", -4108);
		workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(filepath));//保存至filepath，注意一定要用QDir::toNativeSeparators将路径中的"/"转换为"\"，不然一定保存不了。
		workbook->dynamicCall("Close()");//关闭工作簿
		excel->dynamicCall("Quit()");//关闭excel
		delete excel;
		excel = NULL;
	}

}
void heuRobocon::autoAbjustPIDRceordTable()
{

	ui.pidRecordTable->setColumnWidth(0, 60);
	ui.pidRecordTable->setColumnWidth(1, 80);
	ui.pidRecordTable->setColumnWidth(2, 80);
	ui.pidRecordTable->setColumnWidth(3, 80);
    ui.pidRecordTable->setColumnWidth(4, 80);
	int width = ui.pidRecordTable->width();
	width -= 380;
	width /= 3;
	ui.pidRecordTable->setColumnWidth(4, width+1);
	ui.pidRecordTable->setColumnWidth(5, width+1);
	ui.pidRecordTable->setColumnWidth(6, width+1);
}
void heuRobocon::on_addRow_clicked()
{
	int index = ui.pidRecordTable->currentRow();
	ui.pidRecordTable->insertRow(index+1);
}
void heuRobocon::on_clearTableButton_clicked()
{
	currentRow = 0;
	ui.pidRecordTable->setRowCount(6);
}
void heuRobocon::on_painterTemp_clicked()
{	
	QVector<quint16> lineID = readItemsDig(ui.toPaintList);
	QVector<quint16> targetDataId;
	QVector<double> targetInit=searchForInitData(lineID,targetDataId);
	painter *painterLine = new painter(lineID, targetDataId, targetInit);
	
	connect(this, SIGNAL(sendData(quint16, double)), painterLine, SLOT(reciveFilter(quint16, double)));
	connect(this, SIGNAL(controlStartPaint()), painterLine, SLOT(autostart()), Qt::QueuedConnection);
	connect(painterLine, SIGNAL(killMyself(painter*)), this, SLOT(killPainter(painter*)), Qt::QueuedConnection);
	painterLine->show();
}
void heuRobocon::on_addSelectdeButton_clicked()
{
	QList<QListWidgetItem*> itemList;
	itemList = ui.selectedList->selectedItems();
	for (int i = 0; i < itemList.size(); i++) {
		QString writeString = itemList[i]->text();
		if (!ui.toPaintList ->findItems(writeString, Qt::MatchExactly).isEmpty()) {
			continue;
		}
		ui.toPaintList->addItem(itemList[i]->text());
		ui.toPaintList->sortItems();
	}
}
void heuRobocon::on_deleteSelectButton_clicked()
{
	QList<QListWidgetItem*> itemList;
	itemList = ui.toPaintList->selectedItems();
	for (int i = 0; i < itemList.size(); i++) {
		QListWidgetItem* sel = itemList[i];
		int r = ui.toPaintList->row(sel);
		ui.toPaintList->takeItem(r);
		ui.toPaintList->sortItems();
	}
}
void heuRobocon::on_clearTxRxButton_clicked()
{
	ui.RxNumLabel->setText("0");
	ui.TxNumLabel->setText("0");
}
void heuRobocon::on_deleteRecordButton_clicked()
{
	QList<QListWidgetItem*> itemList;
	itemList = ui.toRcordList->selectedItems();
	for (int i = 0; i < itemList.size(); i++) {
		QListWidgetItem* sel = itemList[i];
		int r = ui.toRcordList->row(sel);
		ui.toRcordList->takeItem(r);
		ui.toRcordList->sortItems();
	}
}
void heuRobocon::on_addRecordButton_clicked()
{
	QList<QListWidgetItem*> itemList;
	itemList = ui.selectedList->selectedItems();
	for (int i = 0; i < itemList.size(); i++) {
		QString writeString = itemList[i]->text();
		if (!ui.toRcordList->findItems(writeString, Qt::MatchExactly).isEmpty()) {
			continue;
		}
		ui.toRcordList->addItem(itemList[i]->text());
		ui.toRcordList->sortItems();
	}
}
void heuRobocon::on_dataIDButton_clicked()
{
	QString idLineEditaText = ui.dataIDLineEdit->text();
	QStringList splitStringList = idLineEditaText.split(";");
	for (auto str: splitStringList)
	{
		bool ok;
		quint16 dataId = quint16(str.toInt(&ok));
		if (ok) {
			std::map<quint16, int>::iterator it = dataStorge.find(dataId);
			if (it == dataStorge.end()) {//首次出现ID
				dataStorge[dataId] = 0;
				ui.selectedList->addItem("ID:" + QString("%1").arg(dataId, 4, 10, QChar('0')));
			}
			dataStorge[dataId]++;
		}
		else {
				QStringList regStringList = str.split(":");
				bool ok2 = false;
				if (regStringList.size() != 2) {
					break;
				}
				quint16 dataIdStart = quint16(regStringList[0].toInt(&ok2));
				if (!ok2) {
					break;
				}
				quint16 dataIdEnd = quint16(regStringList[1].toInt(&ok2));
				if (!ok2) {
					break;
				}
				if (dataIdStart > dataIdEnd) {
					break;
				}
				for (int id = dataIdStart; id <= dataIdEnd; id++) {
					std::map<quint16, int>::iterator it = dataStorge.find(id);
					if (it == dataStorge.end()) {//首次出现ID
						dataStorge[id] = 0;
						ui.selectedList->addItem("ID:" + QString("%1").arg(id, 4, 10, QChar('0')));
					}
					dataStorge[id]++;
				}		
		}
	}
	ui.selectedList->sortItems();
}
void heuRobocon::on_startRecordButton_clicked()
{
	QVector<quint16> dataID = readItemsDig(ui.toRcordList);
	QThread *newThread = new QThread();//新进程
	excelThread *excelRecorder = new excelThread(dataID);//进程内执行的程序
	excelRecordManger *mExcelRecordManger = new excelRecordManger(dataID);//弹出的小窗口，作为管理
	excelRecorder->moveToThread(newThread);
	connect(newThread, SIGNAL(finished()), excelRecorder, SLOT(deleteLater()));
	connect(newThread, SIGNAL(started()), excelRecorder, SLOT(startRecordSlot()));  //开启线程槽函数
	connect(this, SIGNAL(sendData(quint16, double)), excelRecorder, SLOT(addData(quint16, double)));
	connect(mExcelRecordManger->ui.stopRecordButton, SIGNAL(clicked()), excelRecorder, SLOT(endRecordSlot()));
	connect(excelRecorder, SIGNAL(quitCurrentThread()), newThread, SLOT(quit()));  //关闭当前进程
	connect(excelRecorder, SIGNAL(quitCurrentThread()), mExcelRecordManger, SLOT(close()));  // 关闭窗口
	connect(mExcelRecordManger, SIGNAL(quitThread()), newThread, SLOT(quit()));
	connect(excelRecorder, SIGNAL(askForInfo()), mExcelRecordManger, SLOT(getInfo()));
	connect(excelRecorder, SIGNAL(dataNumChanged()), mExcelRecordManger, SLOT(dataNumUpdata()));
	connect(mExcelRecordManger, SIGNAL(sendFilePath(QString)), excelRecorder, SLOT(reviveFilePath(QString))); 
	connect(mExcelRecordManger, SIGNAL(sendDataNameSignals(QStringList)), excelRecorder, SLOT(getDataName(QStringList)));  //关闭当前进程
	newThread->start();
	mExcelRecordManger->show();
	emit excelRecordStarted();

}
void heuRobocon::on_deleteSelected0Button_clicked()
{
	QList<QListWidgetItem*> itemList;
	itemList = ui.selectedList->selectedItems();
	for (int i = 0; i < itemList.size(); i++) {
		QListWidgetItem* sel = itemList[i];
		QStringList strSplit=sel->text().split(":");
		quint16 key=quint16(strSplit[1].toInt());
		if (strSplit[0] == "ID") {
			dataStorge.erase(key);
		}
		else {
			dataStorge.erase(key+0x80);
		}
		int r = ui.selectedList->row(sel);
		ui.selectedList->takeItem(r);
		ui.selectedList->sortItems();
	}
}
QVector<quint16> heuRobocon::readItemsDig(QListWidget* listWidget)
{
	QVector<quint16> lineID;
	int rowCount = listWidget->count();
	for (int row = 0; row < rowCount; row++) {
		QListWidgetItem* item = listWidget->item(row);
		QStringList splitString = item->text().split(":");
		quint16 temp = quint16(splitString[1].toInt());
		if (splitString[0]=="ID") {
			lineID.append(temp);
		}
		else {
			lineID.append(temp+0x080);
		}
	}
	return lineID;
}
QVector<double> heuRobocon::searchForInitData(QVector<quint16> dataID, QVector<quint16>& targetDataId)
{
	QVector<double> initData;
	for (auto id : dataID) {
		if (id < 0x80) {
			continue;
		}
		targetDataId.append(id);
		QMap<quint16, double>::Iterator it;
		it = targetLinInit.find(id);
		if (it != targetLinInit.end()) {
			initData.append(it.value());
		}
		else {
			initData.append(0);
		}

	}
	return initData;
}
void heuRobocon::on_addTargetLineButton_clicked()
{
	QString idLineEditaText = ui.taragetLIneEdit->text();
	QStringList splitStringList = idLineEditaText.split(";");
	for (auto str : splitStringList)
	{
		bool ok;
		quint16 dataId = quint16(str.toInt(&ok));		
		if (ok) {
			std::map<quint16, int>::iterator it = dataStorge.find(dataId+0x80);
			if (it == dataStorge.end()) {//首次出现ID
				dataStorge[dataId+0x80] = 0;
				ui.selectedList->addItem("targetID:" + QString("%1").arg(dataId, 4, 10, QChar('0')));
			}
			dataStorge[dataId+0x80]++;
		}
		else {
			QStringList regStringList = str.split(":");
			bool ok2 = false;
			if (regStringList.size() != 2) {
				break;
			}
			quint16 dataIdStart = quint16(regStringList[0].toInt(&ok2));
			if (!ok2) {
				break;
			}
			quint16 dataIdEnd = quint16(regStringList[1].toInt(&ok2));
			if (!ok2) {
				break;
			}
			if (dataIdStart > dataIdEnd) {
				break;
			}
			for (int id = dataIdStart; id <= dataIdEnd; id++) {
				std::map<quint16, int>::iterator it = dataStorge.find(id+0x80);
				if (it == dataStorge.end()) {//首次出现ID
					dataStorge[id+0x80] = 0;
					ui.selectedList->addItem("targetID:" + QString("%1").arg(id, 4, 10, QChar('0')));
				}
				dataStorge[id+0x80]++;
			}
		}
	}
	ui.selectedList->sortItems();
}
void heuRobocon::on_targetButton_clicked()
{
	QUdpSocket qus;
	
	QDateTime *dataTime = new QDateTime();
	HEURC_dataFormat::dataInfoDef dataInfo;
	//header format:1111 1111 1011 1011
	dataInfo.header = 0XFFBB;
	dataInfo.dataType = HEURC_dataFormat::dataType_Double;
	//dataID format:1001 0000 XXXX XXXX
	dataInfo.dataID = (uint16_t)ui.targetNumSpinBox->text().toInt() | 0x09 << 12|0x02<<8;
	double data;
	QString str= ui.targetEdit->text();
	if (str.isEmpty()) {
		data = 0;
	}
	else {
		data = str.toDouble();
	}
	QByteArray msg;
	switch (ui.targetFormatComboBox->currentIndex()) {
		case 0:
			msg = covertDataToSend<double, 1>(dataInfo, &data);
			break;
		case 1:
			msg = covertDataToSend<int, 1>(dataInfo,&data);
			break;
		case 2:
			msg = covertDataToSend<float, 1>(dataInfo, &data);
			break;
		case 3:
			msg = covertDataToSend<char, 1>(dataInfo, &data);
			break;
	}
	qus.writeDatagram(msg, QHostAddress(getHostAddress()), getPort());

	quint16 targetId =quint16( ui.targetNumSpinBox->text().toInt());
	targetLinInit[targetId + 0x80] = data;
	QVector<double> *tempData=new QVector<double>();
	tempData->append(data);
	dataStore(*tempData, targetId+0x80, 1);
	delete tempData;
	int TxNum = ui.TxNumLabel->text().toInt();
	ui.TxNumLabel->setText(QString::number(TxNum + msg.size()));

	ui.textEdit->moveCursor(QTextCursor::End);
	ui.textEdit->insertPlainText(dataTime->currentDateTime().toString("yy-MM-dd HH:mm:ss   "));
	QString temp = msg.toHex();
	ui.textEdit->insertPlainText(temp + '\r\n');
}
template<typename T,quint16 num>
QByteArray heuRobocon::covertDataToSend(HEURC_dataFormat::dataInfoDef dataInfo,double data[num])
{
	QByteArray msg;
	typedef union {
		struct  dataDefStruct{
			HEURC_dataFormat::dataInfoDef _dataInfo;
			T data[num];
		}dataDef;
		uint8_t u8Data[sizeof(dataDefStruct)];
	} sendType;
	sendType sendData;
	sendData.dataDef._dataInfo.header = dataInfo.header;
	sendData.dataDef._dataInfo.dataID = dataInfo.dataID;
	sendData.dataDef._dataInfo.dataNum = num;
	sendData.dataDef._dataInfo.dataType = dataInfo.dataType;
	for (int i = 0; i < num; i++) {
		sendData.dataDef.data[i] = T(data[i]);
	}
	for (int i = 0; i < sizeof(sendType); i++) {
		msg[i] = sendData.u8Data[i];
	}
	return msg;
}