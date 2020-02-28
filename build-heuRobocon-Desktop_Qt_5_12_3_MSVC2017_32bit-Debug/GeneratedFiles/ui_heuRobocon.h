/********************************************************************************
** Form generated from reading UI file 'heuRobocon.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEUROBOCON_H
#define UI_HEUROBOCON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heuRoboconClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_19;
    QTabWidget *tabWidget;
    QWidget *baseTRTab;
    QHBoxLayout *horizontalLayout;
    QGroupBox *baseReciveGroup;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QComboBox *reciveFormatComboBox;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *reciver;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *baseSendGroup;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_4;
    QPushButton *generalSend;
    QLineEdit *sender;
    QComboBox *sendFormatComboBox;
    QLabel *label_8;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *PIDchangeTab;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_15;
    QGroupBox *changePIdGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *Kp;
    QPushButton *readPIDButton;
    QPushButton *send;
    QSpinBox *pidNum;
    QLabel *label_3;
    QLineEdit *Ki;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Kd;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QSpinBox *targetNumSpinBox;
    QLabel *label_13;
    QPushButton *targetButton;
    QComboBox *targetFormatComboBox;
    QLineEdit *targetEdit;
    QGroupBox *pidRecordGroupBox;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *pidRecordTable;
    QVBoxLayout *verticalLayout;
    QPushButton *addRow;
    QPushButton *deleteRowButton;
    QPushButton *clearTableButton;
    QPushButton *exportPIDTableButton;
    QSpacerItem *verticalSpacer;
    QWidget *painterTab;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QPushButton *add1SelectAllButton;
    QPushButton *deleteSelectButton;
    QPushButton *painterTemp;
    QPushButton *addSelectdeButton;
    QListWidget *toPaintList;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_16;
    QPushButton *allAddRecordButton;
    QPushButton *deleteRecordButton;
    QPushButton *startRecordButton;
    QPushButton *addRecordButton;
    QListWidget *toRcordList;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *dataIDLineEdit;
    QPushButton *dataIDButton;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *taragetLIneEdit;
    QPushButton *addTargetLineButton;
    QListWidget *selectedList;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *selectAllButton;
    QPushButton *deleteSelected0Button;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLineEdit *ip1;
    QLineEdit *ip2;
    QLineEdit *ip3;
    QLineEdit *ip4;
    QLabel *label_5;
    QLineEdit *port;
    QLabel *TxTextLabel;
    QLabel *TxNumLabel;
    QLabel *RxTextLabel;
    QLabel *RxNumLabel;
    QPushButton *clearTxRxButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *heuRoboconClass)
    {
        if (heuRoboconClass->objectName().isEmpty())
            heuRoboconClass->setObjectName(QString::fromUtf8("heuRoboconClass"));
        heuRoboconClass->resize(1005, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/heuRobocon/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        heuRoboconClass->setWindowIcon(icon);
        centralWidget = new QWidget(heuRoboconClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_19 = new QVBoxLayout(centralWidget);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideLeft);
        baseTRTab = new QWidget();
        baseTRTab->setObjectName(QString::fromUtf8("baseTRTab"));
        horizontalLayout = new QHBoxLayout(baseTRTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        baseReciveGroup = new QGroupBox(baseTRTab);
        baseReciveGroup->setObjectName(QString::fromUtf8("baseReciveGroup"));
        verticalLayout_10 = new QVBoxLayout(baseReciveGroup);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_9 = new QLabel(baseReciveGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        reciveFormatComboBox = new QComboBox(baseReciveGroup);
        reciveFormatComboBox->addItem(QString());
        reciveFormatComboBox->addItem(QString());
        reciveFormatComboBox->setObjectName(QString::fromUtf8("reciveFormatComboBox"));

        verticalLayout_3->addWidget(reciveFormatComboBox);


        horizontalLayout_7->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_7);

        reciver = new QTextEdit(baseReciveGroup);
        reciver->setObjectName(QString::fromUtf8("reciver"));
        reciver->setMinimumSize(QSize(0, 0));

        verticalLayout_10->addWidget(reciver);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        pushButton_2 = new QPushButton(baseReciveGroup);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_12->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);


        verticalLayout_10->addLayout(horizontalLayout_12);


        horizontalLayout->addWidget(baseReciveGroup);

        baseSendGroup = new QGroupBox(baseTRTab);
        baseSendGroup->setObjectName(QString::fromUtf8("baseSendGroup"));
        verticalLayout_9 = new QVBoxLayout(baseSendGroup);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        generalSend = new QPushButton(baseSendGroup);
        generalSend->setObjectName(QString::fromUtf8("generalSend"));

        gridLayout_4->addWidget(generalSend, 1, 1, 1, 1);

        sender = new QLineEdit(baseSendGroup);
        sender->setObjectName(QString::fromUtf8("sender"));

        gridLayout_4->addWidget(sender, 1, 0, 1, 1);

        sendFormatComboBox = new QComboBox(baseSendGroup);
        sendFormatComboBox->addItem(QString());
        sendFormatComboBox->addItem(QString());
        sendFormatComboBox->setObjectName(QString::fromUtf8("sendFormatComboBox"));

        gridLayout_4->addWidget(sendFormatComboBox, 1, 3, 1, 1);

        label_8 = new QLabel(baseSendGroup);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_8, 0, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout_4);

        textEdit = new QTextEdit(baseSendGroup);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_9->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(baseSendGroup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(baseSendGroup);

        tabWidget->addTab(baseTRTab, QString());
        PIDchangeTab = new QWidget();
        PIDchangeTab->setObjectName(QString::fromUtf8("PIDchangeTab"));
        verticalLayout_17 = new QVBoxLayout(PIDchangeTab);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        changePIdGroup = new QGroupBox(PIDchangeTab);
        changePIdGroup->setObjectName(QString::fromUtf8("changePIdGroup"));
        gridLayout_2 = new QGridLayout(changePIdGroup);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(changePIdGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        Kp = new QLineEdit(changePIdGroup);
        Kp->setObjectName(QString::fromUtf8("Kp"));
        Kp->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(Kp, 1, 1, 1, 1);

        readPIDButton = new QPushButton(changePIdGroup);
        readPIDButton->setObjectName(QString::fromUtf8("readPIDButton"));

        gridLayout_2->addWidget(readPIDButton, 1, 4, 1, 1);

        send = new QPushButton(changePIdGroup);
        send->setObjectName(QString::fromUtf8("send"));

        gridLayout_2->addWidget(send, 1, 5, 1, 1);

        pidNum = new QSpinBox(changePIdGroup);
        pidNum->setObjectName(QString::fromUtf8("pidNum"));

        gridLayout_2->addWidget(pidNum, 1, 0, 1, 1);

        label_3 = new QLabel(changePIdGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 3, 1, 1);

        Ki = new QLineEdit(changePIdGroup);
        Ki->setObjectName(QString::fromUtf8("Ki"));
        Ki->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(Ki, 1, 2, 1, 1);

        label = new QLabel(changePIdGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(changePIdGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        Kd = new QLineEdit(changePIdGroup);
        Kd->setObjectName(QString::fromUtf8("Kd"));
        Kd->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(Kd, 1, 3, 1, 1);


        horizontalLayout_15->addWidget(changePIdGroup);

        groupBox = new QGroupBox(PIDchangeTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 0, 1, 1);

        targetNumSpinBox = new QSpinBox(groupBox);
        targetNumSpinBox->setObjectName(QString::fromUtf8("targetNumSpinBox"));

        gridLayout->addWidget(targetNumSpinBox, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_13, 0, 1, 1, 1);

        targetButton = new QPushButton(groupBox);
        targetButton->setObjectName(QString::fromUtf8("targetButton"));

        gridLayout->addWidget(targetButton, 1, 3, 1, 1);

        targetFormatComboBox = new QComboBox(groupBox);
        targetFormatComboBox->addItem(QString());
        targetFormatComboBox->addItem(QString());
        targetFormatComboBox->addItem(QString());
        targetFormatComboBox->addItem(QString());
        targetFormatComboBox->setObjectName(QString::fromUtf8("targetFormatComboBox"));

        gridLayout->addWidget(targetFormatComboBox, 1, 1, 1, 1);

        targetEdit = new QLineEdit(groupBox);
        targetEdit->setObjectName(QString::fromUtf8("targetEdit"));
        targetEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(targetEdit, 1, 2, 1, 1);


        horizontalLayout_15->addWidget(groupBox);


        verticalLayout_17->addLayout(horizontalLayout_15);

        pidRecordGroupBox = new QGroupBox(PIDchangeTab);
        pidRecordGroupBox->setObjectName(QString::fromUtf8("pidRecordGroupBox"));
        horizontalLayout_6 = new QHBoxLayout(pidRecordGroupBox);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pidRecordTable = new QTableWidget(pidRecordGroupBox);
        if (pidRecordTable->columnCount() < 7)
            pidRecordTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setBackground(QColor(0, 0, 0));
        pidRecordTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (pidRecordTable->rowCount() < 6)
            pidRecordTable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(5, __qtablewidgetitem12);
        pidRecordTable->setObjectName(QString::fromUtf8("pidRecordTable"));
        pidRecordTable->verticalHeader()->setVisible(false);

        horizontalLayout_6->addWidget(pidRecordTable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addRow = new QPushButton(pidRecordGroupBox);
        addRow->setObjectName(QString::fromUtf8("addRow"));

        verticalLayout->addWidget(addRow);

        deleteRowButton = new QPushButton(pidRecordGroupBox);
        deleteRowButton->setObjectName(QString::fromUtf8("deleteRowButton"));

        verticalLayout->addWidget(deleteRowButton);

        clearTableButton = new QPushButton(pidRecordGroupBox);
        clearTableButton->setObjectName(QString::fromUtf8("clearTableButton"));

        verticalLayout->addWidget(clearTableButton);

        exportPIDTableButton = new QPushButton(pidRecordGroupBox);
        exportPIDTableButton->setObjectName(QString::fromUtf8("exportPIDTableButton"));

        verticalLayout->addWidget(exportPIDTableButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout);


        verticalLayout_17->addWidget(pidRecordGroupBox);

        tabWidget->addTab(PIDchangeTab, QString());
        painterTab = new QWidget();
        painterTab->setObjectName(QString::fromUtf8("painterTab"));
        gridLayout_3 = new QGridLayout(painterTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        groupBox_4 = new QGroupBox(painterTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_4);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        add1SelectAllButton = new QPushButton(groupBox_4);
        add1SelectAllButton->setObjectName(QString::fromUtf8("add1SelectAllButton"));

        verticalLayout_11->addWidget(add1SelectAllButton);

        deleteSelectButton = new QPushButton(groupBox_4);
        deleteSelectButton->setObjectName(QString::fromUtf8("deleteSelectButton"));

        verticalLayout_11->addWidget(deleteSelectButton);

        painterTemp = new QPushButton(groupBox_4);
        painterTemp->setObjectName(QString::fromUtf8("painterTemp"));

        verticalLayout_11->addWidget(painterTemp);

        addSelectdeButton = new QPushButton(groupBox_4);
        addSelectdeButton->setObjectName(QString::fromUtf8("addSelectdeButton"));

        verticalLayout_11->addWidget(addSelectdeButton);


        horizontalLayout_10->addLayout(verticalLayout_11);

        toPaintList = new QListWidget(groupBox_4);
        toPaintList->setObjectName(QString::fromUtf8("toPaintList"));

        horizontalLayout_10->addWidget(toPaintList);


        verticalLayout_14->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(painterTab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_15 = new QVBoxLayout(groupBox_5);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        allAddRecordButton = new QPushButton(groupBox_5);
        allAddRecordButton->setObjectName(QString::fromUtf8("allAddRecordButton"));

        verticalLayout_16->addWidget(allAddRecordButton);

        deleteRecordButton = new QPushButton(groupBox_5);
        deleteRecordButton->setObjectName(QString::fromUtf8("deleteRecordButton"));

        verticalLayout_16->addWidget(deleteRecordButton);

        startRecordButton = new QPushButton(groupBox_5);
        startRecordButton->setObjectName(QString::fromUtf8("startRecordButton"));

        verticalLayout_16->addWidget(startRecordButton);

        addRecordButton = new QPushButton(groupBox_5);
        addRecordButton->setObjectName(QString::fromUtf8("addRecordButton"));

        verticalLayout_16->addWidget(addRecordButton);


        horizontalLayout_8->addLayout(verticalLayout_16);

        toRcordList = new QListWidget(groupBox_5);
        toRcordList->setObjectName(QString::fromUtf8("toRcordList"));

        horizontalLayout_8->addWidget(toRcordList);


        verticalLayout_15->addLayout(horizontalLayout_8);


        verticalLayout_14->addWidget(groupBox_5);


        gridLayout_3->addLayout(verticalLayout_14, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(painterTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_13 = new QVBoxLayout(groupBox_3);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        dataIDLineEdit = new QLineEdit(groupBox_3);
        dataIDLineEdit->setObjectName(QString::fromUtf8("dataIDLineEdit"));

        horizontalLayout_9->addWidget(dataIDLineEdit);

        dataIDButton = new QPushButton(groupBox_3);
        dataIDButton->setObjectName(QString::fromUtf8("dataIDButton"));

        horizontalLayout_9->addWidget(dataIDButton);


        verticalLayout_13->addLayout(horizontalLayout_9);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        taragetLIneEdit = new QLineEdit(groupBox_3);
        taragetLIneEdit->setObjectName(QString::fromUtf8("taragetLIneEdit"));

        horizontalLayout_17->addWidget(taragetLIneEdit);

        addTargetLineButton = new QPushButton(groupBox_3);
        addTargetLineButton->setObjectName(QString::fromUtf8("addTargetLineButton"));

        horizontalLayout_17->addWidget(addTargetLineButton);


        verticalLayout_13->addLayout(horizontalLayout_17);

        selectedList = new QListWidget(groupBox_3);
        selectedList->setObjectName(QString::fromUtf8("selectedList"));

        verticalLayout_13->addWidget(selectedList);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        selectAllButton = new QPushButton(groupBox_3);
        selectAllButton->setObjectName(QString::fromUtf8("selectAllButton"));

        horizontalLayout_11->addWidget(selectAllButton);

        deleteSelected0Button = new QPushButton(groupBox_3);
        deleteSelected0Button->setObjectName(QString::fromUtf8("deleteSelected0Button"));

        horizontalLayout_11->addWidget(deleteSelected0Button);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);


        verticalLayout_13->addLayout(horizontalLayout_11);


        gridLayout_3->addWidget(groupBox_3, 0, 1, 1, 1);

        tabWidget->addTab(painterTab, QString());

        verticalLayout_19->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        ip1 = new QLineEdit(centralWidget);
        ip1->setObjectName(QString::fromUtf8("ip1"));
        ip1->setMaximumSize(QSize(30, 16777215));
        ip1->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(ip1);

        ip2 = new QLineEdit(centralWidget);
        ip2->setObjectName(QString::fromUtf8("ip2"));
        ip2->setMaximumSize(QSize(30, 16777215));
        ip2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(ip2);

        ip3 = new QLineEdit(centralWidget);
        ip3->setObjectName(QString::fromUtf8("ip3"));
        ip3->setMaximumSize(QSize(30, 16777215));
        ip3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(ip3);

        ip4 = new QLineEdit(centralWidget);
        ip4->setObjectName(QString::fromUtf8("ip4"));
        ip4->setMaximumSize(QSize(30, 16777215));
        ip4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(ip4);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        port = new QLineEdit(centralWidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(port);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        TxTextLabel = new QLabel(centralWidget);
        TxTextLabel->setObjectName(QString::fromUtf8("TxTextLabel"));

        horizontalLayout_3->addWidget(TxTextLabel);

        TxNumLabel = new QLabel(centralWidget);
        TxNumLabel->setObjectName(QString::fromUtf8("TxNumLabel"));

        horizontalLayout_3->addWidget(TxNumLabel);

        RxTextLabel = new QLabel(centralWidget);
        RxTextLabel->setObjectName(QString::fromUtf8("RxTextLabel"));

        horizontalLayout_3->addWidget(RxTextLabel);

        RxNumLabel = new QLabel(centralWidget);
        RxNumLabel->setObjectName(QString::fromUtf8("RxNumLabel"));

        horizontalLayout_3->addWidget(RxNumLabel);

        clearTxRxButton = new QPushButton(centralWidget);
        clearTxRxButton->setObjectName(QString::fromUtf8("clearTxRxButton"));

        horizontalLayout_3->addWidget(clearTxRxButton);


        verticalLayout_19->addLayout(horizontalLayout_3);

        heuRoboconClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(heuRoboconClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        heuRoboconClass->setStatusBar(statusBar);
        QWidget::setTabOrder(ip2, ip3);
        QWidget::setTabOrder(ip3, ip4);
        QWidget::setTabOrder(ip4, port);
        QWidget::setTabOrder(port, clearTxRxButton);
        QWidget::setTabOrder(clearTxRxButton, reciver);
        QWidget::setTabOrder(reciver, sender);
        QWidget::setTabOrder(sender, textEdit);
        QWidget::setTabOrder(textEdit, pushButton);
        QWidget::setTabOrder(pushButton, addRow);
        QWidget::setTabOrder(addRow, deleteRowButton);
        QWidget::setTabOrder(deleteRowButton, clearTableButton);
        QWidget::setTabOrder(clearTableButton, exportPIDTableButton);
        QWidget::setTabOrder(exportPIDTableButton, dataIDLineEdit);
        QWidget::setTabOrder(dataIDLineEdit, dataIDButton);
        QWidget::setTabOrder(dataIDButton, selectedList);
        QWidget::setTabOrder(selectedList, selectAllButton);
        QWidget::setTabOrder(selectAllButton, deleteSelected0Button);
        QWidget::setTabOrder(deleteSelected0Button, add1SelectAllButton);
        QWidget::setTabOrder(add1SelectAllButton, deleteSelectButton);
        QWidget::setTabOrder(deleteSelectButton, painterTemp);
        QWidget::setTabOrder(painterTemp, addSelectdeButton);
        QWidget::setTabOrder(addSelectdeButton, toPaintList);
        QWidget::setTabOrder(toPaintList, allAddRecordButton);
        QWidget::setTabOrder(allAddRecordButton, deleteRecordButton);
        QWidget::setTabOrder(deleteRecordButton, startRecordButton);
        QWidget::setTabOrder(startRecordButton, addRecordButton);
        QWidget::setTabOrder(addRecordButton, toRcordList);
        QWidget::setTabOrder(toRcordList, tabWidget);

        retranslateUi(heuRoboconClass);
        QObject::connect(pushButton, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(clearTableButton, SIGNAL(clicked()), pidRecordTable, SLOT(clearContents()));
        QObject::connect(selectAllButton, SIGNAL(clicked()), selectedList, SLOT(selectAll()));
        QObject::connect(ip2, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP2_changed()));
        QObject::connect(ip1, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP1_changed()));
        QObject::connect(ip3, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP3_changed()));
        QObject::connect(ip4, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP4_changed()));
        QObject::connect(send, SIGNAL(clicked()), heuRoboconClass, SLOT(on_sendButton_clicked()));
        QObject::connect(add1SelectAllButton, SIGNAL(clicked()), toPaintList, SLOT(selectAll()));
        QObject::connect(allAddRecordButton, SIGNAL(clicked()), toRcordList, SLOT(selectAll()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), reciver, SLOT(clear()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(heuRoboconClass);
    } // setupUi

    void retranslateUi(QMainWindow *heuRoboconClass)
    {
        heuRoboconClass->setWindowTitle(QApplication::translate("heuRoboconClass", "\345\223\210\345\260\224\346\273\250\345\267\245\347\250\213\345\244\247\345\255\246\347\253\236\346\212\200\346\234\272\345\231\250\344\272\272\351\230\237\350\260\203\350\257\225\344\270\212\344\275\215\346\234\272", nullptr));
        baseReciveGroup->setTitle(QApplication::translate("heuRoboconClass", "\345\237\272\346\234\254\346\216\245\346\224\266\345\214\272", nullptr));
        label_9->setText(QApplication::translate("heuRoboconClass", "\346\230\276\347\244\272\346\240\274\345\274\217", nullptr));
        reciveFormatComboBox->setItemText(0, QApplication::translate("heuRoboconClass", "Hex", nullptr));
        reciveFormatComboBox->setItemText(1, QApplication::translate("heuRoboconClass", "\345\255\227\347\254\246\344\270\262", nullptr));

        pushButton_2->setText(QApplication::translate("heuRoboconClass", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272", nullptr));
        baseSendGroup->setTitle(QApplication::translate("heuRoboconClass", "\345\237\272\346\234\254\345\217\221\351\200\201\345\214\272", nullptr));
        generalSend->setText(QApplication::translate("heuRoboconClass", "Send", nullptr));
        sendFormatComboBox->setItemText(0, QApplication::translate("heuRoboconClass", "Hex", nullptr));
        sendFormatComboBox->setItemText(1, QApplication::translate("heuRoboconClass", "\345\255\227\347\254\246\344\270\262", nullptr));

        label_8->setText(QApplication::translate("heuRoboconClass", "\345\217\221\351\200\201\346\240\274\345\274\217", nullptr));
        pushButton->setText(QApplication::translate("heuRoboconClass", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(baseTRTab), QApplication::translate("heuRoboconClass", "\345\237\272\346\234\254\346\224\266\345\217\221\345\214\272", nullptr));
        changePIdGroup->setTitle(QApplication::translate("heuRoboconClass", "PID\344\277\256\346\224\271", nullptr));
        label_6->setText(QApplication::translate("heuRoboconClass", "pid\347\274\226\345\217\267", nullptr));
        Kp->setText(QString());
        readPIDButton->setText(QApplication::translate("heuRoboconClass", "\350\257\273\345\217\226pid", nullptr));
        send->setText(QApplication::translate("heuRoboconClass", "\344\277\256\346\224\271pid", nullptr));
        label_3->setText(QApplication::translate("heuRoboconClass", "Kd", nullptr));
        label->setText(QApplication::translate("heuRoboconClass", "Kp", nullptr));
        label_2->setText(QApplication::translate("heuRoboconClass", "Ki", nullptr));
        groupBox->setTitle(QApplication::translate("heuRoboconClass", "\345\217\221\351\200\201\347\233\256\346\240\207\345\200\274", nullptr));
        label_12->setText(QApplication::translate("heuRoboconClass", "\346\225\260\346\215\256id", nullptr));
        label_13->setText(QApplication::translate("heuRoboconClass", "\346\225\260\346\215\256\347\261\273\345\236\213", nullptr));
        targetButton->setText(QApplication::translate("heuRoboconClass", "\345\217\221\351\200\201", nullptr));
        targetFormatComboBox->setItemText(0, QApplication::translate("heuRoboconClass", "double", nullptr));
        targetFormatComboBox->setItemText(1, QApplication::translate("heuRoboconClass", "int", nullptr));
        targetFormatComboBox->setItemText(2, QApplication::translate("heuRoboconClass", "float", nullptr));
        targetFormatComboBox->setItemText(3, QApplication::translate("heuRoboconClass", "char", nullptr));

        pidRecordGroupBox->setTitle(QApplication::translate("heuRoboconClass", "pid\350\256\260\345\275\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pidRecordTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("heuRoboconClass", "pidID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pidRecordTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("heuRoboconClass", "Kp", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pidRecordTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("heuRoboconClass", "Ki", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = pidRecordTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("heuRoboconClass", "Kd", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = pidRecordTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("heuRoboconClass", "\350\266\205\350\260\203\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = pidRecordTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("heuRoboconClass", "\350\260\203\350\212\202\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = pidRecordTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("heuRoboconClass", "\346\214\257\350\215\241\346\254\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = pidRecordTable->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("heuRoboconClass", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = pidRecordTable->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("heuRoboconClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = pidRecordTable->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("heuRoboconClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = pidRecordTable->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("heuRoboconClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = pidRecordTable->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("heuRoboconClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = pidRecordTable->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("heuRoboconClass", "5", nullptr));
        addRow->setText(QApplication::translate("heuRoboconClass", "\345\242\236\345\212\240\350\241\214", nullptr));
        deleteRowButton->setText(QApplication::translate("heuRoboconClass", "\345\210\240\351\231\244\350\241\214", nullptr));
        clearTableButton->setText(QApplication::translate("heuRoboconClass", "\346\270\205\351\231\244\350\241\250\346\240\274", nullptr));
        exportPIDTableButton->setText(QApplication::translate("heuRoboconClass", "\345\257\274\345\207\272\345\210\260..", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(PIDchangeTab), QApplication::translate("heuRoboconClass", "PID\350\260\203\350\257\225\344\270\216\350\256\260\345\275\225", nullptr));
        groupBox_4->setTitle(QApplication::translate("heuRoboconClass", "\347\273\230\345\210\266\346\225\260\346\215\2561", nullptr));
        add1SelectAllButton->setText(QApplication::translate("heuRoboconClass", "\345\205\250\351\200\211", nullptr));
        deleteSelectButton->setText(QApplication::translate("heuRoboconClass", "\345\210\240\351\231\244<<", nullptr));
        painterTemp->setText(QApplication::translate("heuRoboconClass", "\347\273\230\345\210\266", nullptr));
        addSelectdeButton->setText(QApplication::translate("heuRoboconClass", "\345\212\240\345\205\245>>", nullptr));
        groupBox_5->setTitle(QApplication::translate("heuRoboconClass", "\346\225\260\346\215\256\350\256\260\345\275\225", nullptr));
        allAddRecordButton->setText(QApplication::translate("heuRoboconClass", "\345\205\250\351\200\211", nullptr));
        deleteRecordButton->setText(QApplication::translate("heuRoboconClass", "\345\210\240\351\231\244<<", nullptr));
        startRecordButton->setText(QApplication::translate("heuRoboconClass", "\345\274\200\345\247\213\350\256\260\345\275\225", nullptr));
        addRecordButton->setText(QApplication::translate("heuRoboconClass", "\345\212\240\345\205\245>>", nullptr));
        groupBox_3->setTitle(QApplication::translate("heuRoboconClass", "\345\275\223\345\211\215\346\225\260\346\215\256", nullptr));
        dataIDButton->setText(QApplication::translate("heuRoboconClass", "\346\267\273\345\212\240\346\225\260\346\215\256ID", nullptr));
        addTargetLineButton->setText(QApplication::translate("heuRoboconClass", "\346\267\273\345\212\240\347\233\256\346\240\207\346\233\262\347\272\277", nullptr));
        selectAllButton->setText(QApplication::translate("heuRoboconClass", "\345\205\250\351\200\211", nullptr));
        deleteSelected0Button->setText(QApplication::translate("heuRoboconClass", "\345\210\240\351\231\244\346\211\200\351\200\211", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(painterTab), QApplication::translate("heuRoboconClass", "\347\224\273\345\233\276\344\270\216\350\256\260\345\275\225", nullptr));
        label_11->setText(QApplication::translate("heuRoboconClass", "\345\223\210\345\260\224\346\273\250\345\267\245\347\250\213\345\244\247\345\255\246\347\253\236\346\212\200\346\234\272\345\231\250\344\272\272\351\230\237\350\260\203\350\257\225\344\270\212\344\275\215\346\234\272", nullptr));
        label_4->setText(QApplication::translate("heuRoboconClass", "\345\217\221\351\200\201\345\210\260IP\345\234\260\345\235\200\357\274\232", nullptr));
        ip1->setText(QApplication::translate("heuRoboconClass", "192", nullptr));
        ip2->setText(QApplication::translate("heuRoboconClass", "168", nullptr));
        ip3->setText(QApplication::translate("heuRoboconClass", "2", nullptr));
        ip4->setText(QApplication::translate("heuRoboconClass", "105", nullptr));
        label_5->setText(QApplication::translate("heuRoboconClass", "\347\253\257\345\217\243\345\234\260\345\235\200", nullptr));
        port->setText(QApplication::translate("heuRoboconClass", "1000", nullptr));
        TxTextLabel->setText(QApplication::translate("heuRoboconClass", "Tx:", nullptr));
        TxNumLabel->setText(QApplication::translate("heuRoboconClass", "0", nullptr));
        RxTextLabel->setText(QApplication::translate("heuRoboconClass", "Rx:", nullptr));
        RxNumLabel->setText(QApplication::translate("heuRoboconClass", "0", nullptr));
        clearTxRxButton->setText(QApplication::translate("heuRoboconClass", "\346\270\205\351\233\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class heuRoboconClass: public Ui_heuRoboconClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEUROBOCON_H
