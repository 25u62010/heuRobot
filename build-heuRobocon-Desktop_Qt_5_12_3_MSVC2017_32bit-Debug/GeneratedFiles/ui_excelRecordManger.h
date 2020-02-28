/********************************************************************************
** Form generated from reading UI file 'excelRecordManger.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCELRECORDMANGER_H
#define UI_EXCELRECORDMANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_excelRecordManger
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *currentTimeLabel;
    QLabel *TimeTotalLabel;
    QLabel *pointTotalLabel;
    QLabel *recordNumLabel;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *dataID;
    QComboBox *dataIDComboBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *dataNameLabel;
    QLineEdit *dataNameEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopRecordButton;

    void setupUi(QWidget *excelRecordManger)
    {
        if (excelRecordManger->objectName().isEmpty())
            excelRecordManger->setObjectName(QString::fromUtf8("excelRecordManger"));
        excelRecordManger->resize(300, 150);
        excelRecordManger->setMinimumSize(QSize(300, 150));
        excelRecordManger->setMaximumSize(QSize(300, 150));
        verticalLayout = new QVBoxLayout(excelRecordManger);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        currentTimeLabel = new QLabel(excelRecordManger);
        currentTimeLabel->setObjectName(QString::fromUtf8("currentTimeLabel"));

        horizontalLayout->addWidget(currentTimeLabel);

        TimeTotalLabel = new QLabel(excelRecordManger);
        TimeTotalLabel->setObjectName(QString::fromUtf8("TimeTotalLabel"));

        horizontalLayout->addWidget(TimeTotalLabel);

        pointTotalLabel = new QLabel(excelRecordManger);
        pointTotalLabel->setObjectName(QString::fromUtf8("pointTotalLabel"));

        horizontalLayout->addWidget(pointTotalLabel);

        recordNumLabel = new QLabel(excelRecordManger);
        recordNumLabel->setObjectName(QString::fromUtf8("recordNumLabel"));

        horizontalLayout->addWidget(recordNumLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dataID = new QLabel(excelRecordManger);
        dataID->setObjectName(QString::fromUtf8("dataID"));

        verticalLayout_2->addWidget(dataID);

        dataIDComboBox = new QComboBox(excelRecordManger);
        dataIDComboBox->setObjectName(QString::fromUtf8("dataIDComboBox"));

        verticalLayout_2->addWidget(dataIDComboBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dataNameLabel = new QLabel(excelRecordManger);
        dataNameLabel->setObjectName(QString::fromUtf8("dataNameLabel"));

        verticalLayout_3->addWidget(dataNameLabel);

        dataNameEdit = new QLineEdit(excelRecordManger);
        dataNameEdit->setObjectName(QString::fromUtf8("dataNameEdit"));

        verticalLayout_3->addWidget(dataNameEdit);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        stopRecordButton = new QPushButton(excelRecordManger);
        stopRecordButton->setObjectName(QString::fromUtf8("stopRecordButton"));

        horizontalLayout_2->addWidget(stopRecordButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(excelRecordManger);

        QMetaObject::connectSlotsByName(excelRecordManger);
    } // setupUi

    void retranslateUi(QWidget *excelRecordManger)
    {
        excelRecordManger->setWindowTitle(QApplication::translate("excelRecordManger", "excelRecordManger", nullptr));
        currentTimeLabel->setText(QApplication::translate("excelRecordManger", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", nullptr));
        TimeTotalLabel->setText(QApplication::translate("excelRecordManger", "00:00:00", nullptr));
        pointTotalLabel->setText(QApplication::translate("excelRecordManger", "\346\200\273\350\256\241\350\256\260\345\275\225\346\225\260\351\207\217", nullptr));
        recordNumLabel->setText(QApplication::translate("excelRecordManger", "0", nullptr));
        dataID->setText(QApplication::translate("excelRecordManger", "\346\225\260\346\215\256id", nullptr));
        dataNameLabel->setText(QApplication::translate("excelRecordManger", "\346\225\260\346\215\256\345\221\275\345\220\215", nullptr));
        stopRecordButton->setText(QApplication::translate("excelRecordManger", "\345\201\234\346\255\242\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class excelRecordManger: public Ui_excelRecordManger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCELRECORDMANGER_H
