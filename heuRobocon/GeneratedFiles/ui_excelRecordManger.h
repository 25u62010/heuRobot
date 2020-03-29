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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
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
    QVBoxLayout *verticalLayout_2;
    QLabel *currentTimeLabel;
    QLabel *TimeTotalLabel;
    QVBoxLayout *verticalLayout_3;
    QLabel *pointTotalLabel;
    QLabel *recordNumLabel;
    QGridLayout *gridLayout;
    QComboBox *dataIDComboBox;
    QLabel *dataID;
    QLabel *dataNameLabel;
    QLineEdit *dataNameEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *averageImportCheckBox;
    QCheckBox *stdDevImportCheckBox;
    QCheckBox *varianceImportcheckBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopRecordButton;

    void setupUi(QWidget *excelRecordManger)
    {
        if (excelRecordManger->objectName().isEmpty())
            excelRecordManger->setObjectName(QString::fromUtf8("excelRecordManger"));
        excelRecordManger->resize(450, 150);
        excelRecordManger->setMinimumSize(QSize(450, 150));
        excelRecordManger->setMaximumSize(QSize(450, 150));
        verticalLayout = new QVBoxLayout(excelRecordManger);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        currentTimeLabel = new QLabel(excelRecordManger);
        currentTimeLabel->setObjectName(QString::fromUtf8("currentTimeLabel"));
        currentTimeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(currentTimeLabel);

        TimeTotalLabel = new QLabel(excelRecordManger);
        TimeTotalLabel->setObjectName(QString::fromUtf8("TimeTotalLabel"));
        TimeTotalLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(TimeTotalLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pointTotalLabel = new QLabel(excelRecordManger);
        pointTotalLabel->setObjectName(QString::fromUtf8("pointTotalLabel"));
        pointTotalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(pointTotalLabel);

        recordNumLabel = new QLabel(excelRecordManger);
        recordNumLabel->setObjectName(QString::fromUtf8("recordNumLabel"));
        recordNumLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(recordNumLabel);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dataIDComboBox = new QComboBox(excelRecordManger);
        dataIDComboBox->setObjectName(QString::fromUtf8("dataIDComboBox"));

        gridLayout->addWidget(dataIDComboBox, 2, 0, 1, 1);

        dataID = new QLabel(excelRecordManger);
        dataID->setObjectName(QString::fromUtf8("dataID"));
        dataID->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dataID, 0, 0, 1, 1);

        dataNameLabel = new QLabel(excelRecordManger);
        dataNameLabel->setObjectName(QString::fromUtf8("dataNameLabel"));
        dataNameLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dataNameLabel, 0, 2, 1, 1);

        dataNameEdit = new QLineEdit(excelRecordManger);
        dataNameEdit->setObjectName(QString::fromUtf8("dataNameEdit"));

        gridLayout->addWidget(dataNameEdit, 2, 2, 1, 1);

        label = new QLabel(excelRecordManger);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        averageImportCheckBox = new QCheckBox(excelRecordManger);
        averageImportCheckBox->setObjectName(QString::fromUtf8("averageImportCheckBox"));
        averageImportCheckBox->setEnabled(true);
        averageImportCheckBox->setChecked(false);

        horizontalLayout_3->addWidget(averageImportCheckBox);

        stdDevImportCheckBox = new QCheckBox(excelRecordManger);
        stdDevImportCheckBox->setObjectName(QString::fromUtf8("stdDevImportCheckBox"));
        stdDevImportCheckBox->setEnabled(true);

        horizontalLayout_3->addWidget(stdDevImportCheckBox);

        varianceImportcheckBox = new QCheckBox(excelRecordManger);
        varianceImportcheckBox->setObjectName(QString::fromUtf8("varianceImportcheckBox"));
        varianceImportcheckBox->setEnabled(true);

        horizontalLayout_3->addWidget(varianceImportcheckBox);


        gridLayout->addLayout(horizontalLayout_3, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

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
        pointTotalLabel->setText(QApplication::translate("excelRecordManger", "\346\200\273\350\256\241\350\256\260\345\275\225\346\225\260\351\207\217:", nullptr));
        recordNumLabel->setText(QApplication::translate("excelRecordManger", "0", nullptr));
        dataID->setText(QApplication::translate("excelRecordManger", "\346\225\260\346\215\256id", nullptr));
        dataNameLabel->setText(QApplication::translate("excelRecordManger", "\346\225\260\346\215\256\345\221\275\345\220\215", nullptr));
        label->setText(QApplication::translate("excelRecordManger", "\345\257\274\345\207\272\347\273\237\350\256\241\346\225\260\346\215\256", nullptr));
        averageImportCheckBox->setText(QApplication::translate("excelRecordManger", "\345\271\263\345\235\207\345\200\274", nullptr));
        stdDevImportCheckBox->setText(QApplication::translate("excelRecordManger", "\346\240\207\345\207\206\345\267\256", nullptr));
        varianceImportcheckBox->setText(QApplication::translate("excelRecordManger", "\346\226\271\345\267\256", nullptr));
        stopRecordButton->setText(QApplication::translate("excelRecordManger", "\345\201\234\346\255\242\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class excelRecordManger: public Ui_excelRecordManger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCELRECORDMANGER_H
