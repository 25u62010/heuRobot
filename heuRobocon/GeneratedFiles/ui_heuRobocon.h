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
    QTextEdit *reciver;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QComboBox *reciveFormatComboBox;
    QGroupBox *baseSendGroup;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *sender;
    QPushButton *generalSend;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_8;
    QComboBox *sendFormatComboBox;
    QLabel *label_10;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *PIDchangeTab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *pidRecordTable;
    QVBoxLayout *verticalLayout;
    QPushButton *addRow;
    QPushButton *deleteRowButton;
    QPushButton *clearTableButton;
    QPushButton *exportPIDTableButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *changePIdGroup;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *Ki;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *Kd;
    QVBoxLayout *verticalLayout_7;
    QLabel *changLabel;
    QPushButton *send;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QSpinBox *pidNum;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QPushButton *readPIDButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *Kp;
    QSpacerItem *horizontalSpacer_4;
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
        heuRoboconClass->resize(948, 531);
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
        reciver = new QTextEdit(baseReciveGroup);
        reciver->setObjectName(QString::fromUtf8("reciver"));
        reciver->setMinimumSize(QSize(0, 0));

        verticalLayout_10->addWidget(reciver);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_2 = new QPushButton(baseReciveGroup);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        label_9 = new QLabel(baseReciveGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        reciveFormatComboBox = new QComboBox(baseReciveGroup);
        reciveFormatComboBox->addItem(QString());
        reciveFormatComboBox->addItem(QString());
        reciveFormatComboBox->setObjectName(QString::fromUtf8("reciveFormatComboBox"));

        horizontalLayout_7->addWidget(reciveFormatComboBox);


        verticalLayout_10->addLayout(horizontalLayout_7);


        horizontalLayout->addWidget(baseReciveGroup);

        baseSendGroup = new QGroupBox(baseTRTab);
        baseSendGroup->setObjectName(QString::fromUtf8("baseSendGroup"));
        verticalLayout_9 = new QVBoxLayout(baseSendGroup);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sender = new QLineEdit(baseSendGroup);
        sender->setObjectName(QString::fromUtf8("sender"));

        horizontalLayout_4->addWidget(sender);

        generalSend = new QPushButton(baseSendGroup);
        generalSend->setObjectName(QString::fromUtf8("generalSend"));

        horizontalLayout_4->addWidget(generalSend);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_8 = new QLabel(baseSendGroup);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_12->addWidget(label_8);

        sendFormatComboBox = new QComboBox(baseSendGroup);
        sendFormatComboBox->addItem(QString());
        sendFormatComboBox->addItem(QString());
        sendFormatComboBox->setObjectName(QString::fromUtf8("sendFormatComboBox"));

        verticalLayout_12->addWidget(sendFormatComboBox);

        label_10 = new QLabel(baseSendGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_12->addWidget(label_10);


        horizontalLayout_4->addLayout(verticalLayout_12);


        verticalLayout_9->addLayout(horizontalLayout_4);

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
        gridLayout_2 = new QGridLayout(PIDchangeTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(PIDchangeTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pidRecordTable = new QTableWidget(groupBox);
        if (pidRecordTable->columnCount() < 6)
            pidRecordTable->setColumnCount(6);
        QFont font;
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(0, 0, 0));
        pidRecordTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        pidRecordTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (pidRecordTable->rowCount() < 6)
            pidRecordTable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        pidRecordTable->setVerticalHeaderItem(5, __qtablewidgetitem11);
        pidRecordTable->setObjectName(QString::fromUtf8("pidRecordTable"));

        horizontalLayout_6->addWidget(pidRecordTable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addRow = new QPushButton(groupBox);
        addRow->setObjectName(QString::fromUtf8("addRow"));

        verticalLayout->addWidget(addRow);

        deleteRowButton = new QPushButton(groupBox);
        deleteRowButton->setObjectName(QString::fromUtf8("deleteRowButton"));

        verticalLayout->addWidget(deleteRowButton);

        clearTableButton = new QPushButton(groupBox);
        clearTableButton->setObjectName(QString::fromUtf8("clearTableButton"));

        verticalLayout->addWidget(clearTableButton);

        exportPIDTableButton = new QPushButton(groupBox);
        exportPIDTableButton->setObjectName(QString::fromUtf8("exportPIDTableButton"));

        verticalLayout->addWidget(exportPIDTableButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        changePIdGroup = new QGroupBox(PIDchangeTab);
        changePIdGroup->setObjectName(QString::fromUtf8("changePIdGroup"));
        gridLayout = new QGridLayout(changePIdGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(changePIdGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        Ki = new QLineEdit(changePIdGroup);
        Ki->setObjectName(QString::fromUtf8("Ki"));
        Ki->setMaximumSize(QSize(100, 16777215));

        verticalLayout_4->addWidget(Ki);


        gridLayout->addLayout(verticalLayout_4, 0, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(changePIdGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        Kd = new QLineEdit(changePIdGroup);
        Kd->setObjectName(QString::fromUtf8("Kd"));
        Kd->setMaximumSize(QSize(100, 16777215));

        verticalLayout_5->addWidget(Kd);


        gridLayout->addLayout(verticalLayout_5, 0, 3, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        changLabel = new QLabel(changePIdGroup);
        changLabel->setObjectName(QString::fromUtf8("changLabel"));

        verticalLayout_7->addWidget(changLabel);

        send = new QPushButton(changePIdGroup);
        send->setObjectName(QString::fromUtf8("send"));

        verticalLayout_7->addWidget(send);


        gridLayout->addLayout(verticalLayout_7, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 6, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(changePIdGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        pidNum = new QSpinBox(changePIdGroup);
        pidNum->setObjectName(QString::fromUtf8("pidNum"));

        verticalLayout_6->addWidget(pidNum);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(changePIdGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        readPIDButton = new QPushButton(changePIdGroup);
        readPIDButton->setObjectName(QString::fromUtf8("readPIDButton"));

        verticalLayout_2->addWidget(readPIDButton);


        gridLayout->addLayout(verticalLayout_2, 0, 4, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(changePIdGroup);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        Kp = new QLineEdit(changePIdGroup);
        Kp->setObjectName(QString::fromUtf8("Kp"));
        Kp->setMaximumSize(QSize(100, 16777215));

        verticalLayout_3->addWidget(Kp);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 7, 1, 1);


        gridLayout_2->addWidget(changePIdGroup, 0, 0, 1, 1);

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

        horizontalLayout_5->addWidget(ip1);

        ip2 = new QLineEdit(centralWidget);
        ip2->setObjectName(QString::fromUtf8("ip2"));
        ip2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(ip2);

        ip3 = new QLineEdit(centralWidget);
        ip3->setObjectName(QString::fromUtf8("ip3"));
        ip3->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(ip3);

        ip4 = new QLineEdit(centralWidget);
        ip4->setObjectName(QString::fromUtf8("ip4"));
        ip4->setMaximumSize(QSize(30, 16777215));

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
        QWidget::setTabOrder(ip1, ip2);
        QWidget::setTabOrder(ip2, ip3);
        QWidget::setTabOrder(ip3, ip4);
        QWidget::setTabOrder(ip4, port);
        QWidget::setTabOrder(port, clearTxRxButton);
        QWidget::setTabOrder(clearTxRxButton, reciver);
        QWidget::setTabOrder(reciver, pushButton_2);
        QWidget::setTabOrder(pushButton_2, reciveFormatComboBox);
        QWidget::setTabOrder(reciveFormatComboBox, sender);
        QWidget::setTabOrder(sender, generalSend);
        QWidget::setTabOrder(generalSend, sendFormatComboBox);
        QWidget::setTabOrder(sendFormatComboBox, textEdit);
        QWidget::setTabOrder(textEdit, pushButton);
        QWidget::setTabOrder(pushButton, pidNum);
        QWidget::setTabOrder(pidNum, Kp);
        QWidget::setTabOrder(Kp, Ki);
        QWidget::setTabOrder(Ki, Kd);
        QWidget::setTabOrder(Kd, readPIDButton);
        QWidget::setTabOrder(readPIDButton, send);
        QWidget::setTabOrder(send, addRow);
        QWidget::setTabOrder(addRow, deleteRowButton);
        QWidget::setTabOrder(deleteRowButton, clearTableButton);
        QWidget::setTabOrder(clearTableButton, exportPIDTableButton);
        QWidget::setTabOrder(exportPIDTableButton, pidRecordTable);
        QWidget::setTabOrder(pidRecordTable, dataIDLineEdit);
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
        QObject::connect(pushButton_2, SIGNAL(clicked()), reciver, SLOT(clear()));
        QObject::connect(clearTableButton, SIGNAL(clicked()), pidRecordTable, SLOT(clearContents()));
        QObject::connect(selectAllButton, SIGNAL(clicked()), selectedList, SLOT(selectAll()));
        QObject::connect(ip2, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP2_changed()));
        QObject::connect(ip1, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP1_changed()));
        QObject::connect(ip3, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP3_changed()));
        QObject::connect(ip4, SIGNAL(textChanged(QString)), heuRoboconClass, SLOT(on_IP4_changed()));
        QObject::connect(send, SIGNAL(clicked()), heuRoboconClass, SLOT(on_sendButton_clicked()));
        QObject::connect(add1SelectAllButton, SIGNAL(clicked()), toPaintList, SLOT(selectAll()));
        QObject::connect(allAddRecordButton, SIGNAL(clicked()), toRcordList, SLOT(selectAll()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(heuRoboconClass);
    } // setupUi

    void retranslateUi(QMainWindow *heuRoboconClass)
    {
        heuRoboconClass->setWindowTitle(QApplication::translate("heuRoboconClass", "heuRobocon", nullptr));
        baseReciveGroup->setTitle(QApplication::translate("heuRoboconClass", "\345\237\272\346\234\254\346\216\245\346\224\266\345\214\272", nullptr));
        pushButton_2->setText(QApplication::translate("heuRoboconClass", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272", nullptr));
        label_9->setText(QApplication::translate("heuRoboconClass", "\346\230\276\347\244\272\346\240\274\345\274\217", nullptr));
        reciveFormatComboBox->setItemText(0, QApplication::translate("heuRoboconClass", "Hex", nullptr));
        reciveFormatComboBox->setItemText(1, QApplication::translate("heuRoboconClass", "\345\255\227\347\254\246\344\270\262", nullptr));

        baseSendGroup->setTitle(QApplication::translate("heuRoboconClass", "\345\237\272\346\234\254\345\217\221\351\200\201\345\214\272", nullptr));
        generalSend->setText(QApplication::translate("heuRoboconClass", "Send", nullptr));
        label_8->setText(QApplication::translate("heuRoboconClass", "\345\217\221\351\200\201\346\240\274\345\274\217", nullptr));
        sendFormatComboBox->setItemText(0, QApplication::translate("heuRoboconClass", "Hex", nullptr));
        sendFormatComboBox->setItemText(1, QApplication::translate("heuRoboconClass", "\345\255\227\347\254\246\344\270\262", nullptr));

        label_10->setText(QString());
        pushButton->setText(QApplication::translate("heuRoboconClass", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(baseTRTab), QApplication::translate("heuRoboconClass", "\345\237\272\346\234\254\346\224\266\345\217\221\345\214\272", nullptr));
        groupBox->setTitle(QApplication::translate("heuRoboconClass", "pid\350\256\260\345\275\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pidRecordTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("heuRoboconClass", "Kp", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pidRecordTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("heuRoboconClass", "Ki", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pidRecordTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("heuRoboconClass", "Kd", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = pidRecordTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("heuRoboconClass", "\350\266\205\350\260\203\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = pidRecordTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("heuRoboconClass", "\350\260\203\350\212\202\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = pidRecordTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("heuRoboconClass", "\346\214\257\350\215\241\346\254\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = pidRecordTable->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("heuRoboconClass", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = pidRecordTable->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("heuRoboconClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = pidRecordTable->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("heuRoboconClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = pidRecordTable->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("heuRoboconClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = pidRecordTable->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("heuRoboconClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = pidRecordTable->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("heuRoboconClass", "5", nullptr));
        addRow->setText(QApplication::translate("heuRoboconClass", "\345\242\236\345\212\240\350\241\214", nullptr));
        deleteRowButton->setText(QApplication::translate("heuRoboconClass", "\345\210\240\351\231\244\350\241\214", nullptr));
        clearTableButton->setText(QApplication::translate("heuRoboconClass", "\346\270\205\351\231\244\350\241\250\346\240\274", nullptr));
        exportPIDTableButton->setText(QApplication::translate("heuRoboconClass", "\345\257\274\345\207\272\345\210\260..", nullptr));
        changePIdGroup->setTitle(QApplication::translate("heuRoboconClass", "PID\344\277\256\346\224\271", nullptr));
        label_2->setText(QApplication::translate("heuRoboconClass", "    Ki", nullptr));
        label_3->setText(QApplication::translate("heuRoboconClass", "    Kd", nullptr));
        changLabel->setText(QString());
        send->setText(QApplication::translate("heuRoboconClass", "\344\277\256\346\224\271pid", nullptr));
        label_6->setText(QApplication::translate("heuRoboconClass", "pid\347\274\226\345\217\267", nullptr));
        label_7->setText(QString());
        readPIDButton->setText(QApplication::translate("heuRoboconClass", "\350\257\273\345\217\226pid", nullptr));
        label->setText(QApplication::translate("heuRoboconClass", "    Kp", nullptr));
        Kp->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(PIDchangeTab), QApplication::translate("heuRoboconClass", "PID\345\217\221\351\200\201\344\270\216\350\256\260\345\275\225", nullptr));
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
        selectAllButton->setText(QApplication::translate("heuRoboconClass", "\345\205\250\351\200\211", nullptr));
        deleteSelected0Button->setText(QApplication::translate("heuRoboconClass", "\345\210\240\351\231\244\346\211\200\351\200\211", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(painterTab), QApplication::translate("heuRoboconClass", "\347\224\273\345\233\276\344\270\216\350\256\260\345\275\225", nullptr));
        label_11->setText(QApplication::translate("heuRoboconClass", "\345\223\210\345\260\224\346\273\250\345\267\245\347\250\213\345\244\247\345\255\246\347\253\236\346\212\200\346\234\272\345\231\250\344\272\272\351\230\237\350\260\203\350\257\225\344\270\212\344\275\215\346\234\2721.0", nullptr));
        label_4->setText(QApplication::translate("heuRoboconClass", "IP\345\234\260\345\235\200", nullptr));
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
