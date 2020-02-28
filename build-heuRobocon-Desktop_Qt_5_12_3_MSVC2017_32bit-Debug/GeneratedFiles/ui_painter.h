/********************************************************************************
** Form generated from reading UI file 'painter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER_H
#define UI_PAINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_painter
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *painterLayout;
    QScrollBar *painterScrollBar;
    QHBoxLayout *horizontalLayout;
    QGroupBox *lineChangedGroup;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *selectLIneComboBox;
    QPushButton *selectLIneButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *showAllButton;
    QPushButton *hideAllButton;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *viewGroup;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *uperTimeEdit;
    QLabel *label_3;
    QLineEdit *downTimeEdit;
    QPushButton *showRegionTimeButton;
    QGroupBox *lineGroup;
    QGridLayout *gridLayout;
    QPushButton *pauseShowButton;
    QPushButton *autoAbjustButton;
    QPushButton *clearLineButton;
    QPushButton *viewAllButton;
    QGroupBox *longestTimeGroup;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *longestTimeEdit;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;

    void setupUi(QWidget *painter)
    {
        if (painter->objectName().isEmpty())
            painter->setObjectName(QString::fromUtf8("painter"));
        painter->resize(1005, 512);
        verticalLayout = new QVBoxLayout(painter);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        painterLayout = new QVBoxLayout();
        painterLayout->setSpacing(6);
        painterLayout->setObjectName(QString::fromUtf8("painterLayout"));
        painterScrollBar = new QScrollBar(painter);
        painterScrollBar->setObjectName(QString::fromUtf8("painterScrollBar"));
        painterScrollBar->setMinimum(0);
        painterScrollBar->setMaximum(0);
        painterScrollBar->setSingleStep(1);
        painterScrollBar->setPageStep(1);
        painterScrollBar->setValue(0);
        painterScrollBar->setSliderPosition(0);
        painterScrollBar->setOrientation(Qt::Horizontal);

        painterLayout->addWidget(painterScrollBar);


        verticalLayout->addLayout(painterLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineChangedGroup = new QGroupBox(painter);
        lineChangedGroup->setObjectName(QString::fromUtf8("lineChangedGroup"));
        verticalLayout_2 = new QVBoxLayout(lineChangedGroup);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        selectLIneComboBox = new QComboBox(lineChangedGroup);
        selectLIneComboBox->setObjectName(QString::fromUtf8("selectLIneComboBox"));
        selectLIneComboBox->setEnabled(false);
        selectLIneComboBox->setEditable(true);

        horizontalLayout_6->addWidget(selectLIneComboBox);

        selectLIneButton = new QPushButton(lineChangedGroup);
        selectLIneButton->setObjectName(QString::fromUtf8("selectLIneButton"));
        selectLIneButton->setEnabled(false);

        horizontalLayout_6->addWidget(selectLIneButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        showAllButton = new QPushButton(lineChangedGroup);
        showAllButton->setObjectName(QString::fromUtf8("showAllButton"));
        showAllButton->setEnabled(false);

        horizontalLayout_5->addWidget(showAllButton);

        hideAllButton = new QPushButton(lineChangedGroup);
        hideAllButton->setObjectName(QString::fromUtf8("hideAllButton"));
        hideAllButton->setEnabled(false);

        horizontalLayout_5->addWidget(hideAllButton);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout->addWidget(lineChangedGroup);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        viewGroup = new QGroupBox(painter);
        viewGroup->setObjectName(QString::fromUtf8("viewGroup"));
        horizontalLayout_3 = new QHBoxLayout(viewGroup);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        uperTimeEdit = new QLineEdit(viewGroup);
        uperTimeEdit->setObjectName(QString::fromUtf8("uperTimeEdit"));
        uperTimeEdit->setEnabled(false);
        uperTimeEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(uperTimeEdit);

        label_3 = new QLabel(viewGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        downTimeEdit = new QLineEdit(viewGroup);
        downTimeEdit->setObjectName(QString::fromUtf8("downTimeEdit"));
        downTimeEdit->setEnabled(false);
        downTimeEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(downTimeEdit);

        showRegionTimeButton = new QPushButton(viewGroup);
        showRegionTimeButton->setObjectName(QString::fromUtf8("showRegionTimeButton"));
        showRegionTimeButton->setEnabled(false);

        horizontalLayout_3->addWidget(showRegionTimeButton);


        verticalLayout_3->addWidget(viewGroup);


        horizontalLayout->addLayout(verticalLayout_3);

        lineGroup = new QGroupBox(painter);
        lineGroup->setObjectName(QString::fromUtf8("lineGroup"));
        gridLayout = new QGridLayout(lineGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pauseShowButton = new QPushButton(lineGroup);
        pauseShowButton->setObjectName(QString::fromUtf8("pauseShowButton"));
        pauseShowButton->setEnabled(false);

        gridLayout->addWidget(pauseShowButton, 0, 0, 1, 1);

        autoAbjustButton = new QPushButton(lineGroup);
        autoAbjustButton->setObjectName(QString::fromUtf8("autoAbjustButton"));
        autoAbjustButton->setEnabled(false);

        gridLayout->addWidget(autoAbjustButton, 0, 1, 1, 1);

        clearLineButton = new QPushButton(lineGroup);
        clearLineButton->setObjectName(QString::fromUtf8("clearLineButton"));
        clearLineButton->setEnabled(false);

        gridLayout->addWidget(clearLineButton, 1, 0, 1, 1);

        viewAllButton = new QPushButton(lineGroup);
        viewAllButton->setObjectName(QString::fromUtf8("viewAllButton"));
        viewAllButton->setEnabled(false);

        gridLayout->addWidget(viewAllButton, 1, 1, 1, 1);


        horizontalLayout->addWidget(lineGroup);

        longestTimeGroup = new QGroupBox(painter);
        longestTimeGroup->setObjectName(QString::fromUtf8("longestTimeGroup"));
        horizontalLayout_2 = new QHBoxLayout(longestTimeGroup);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(longestTimeGroup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        longestTimeEdit = new QLineEdit(longestTimeGroup);
        longestTimeEdit->setObjectName(QString::fromUtf8("longestTimeEdit"));
        longestTimeEdit->setEnabled(false);
        longestTimeEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(longestTimeEdit);

        label_2 = new QLabel(longestTimeGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout->addWidget(longestTimeGroup);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(painter);

        QMetaObject::connectSlotsByName(painter);
    } // setupUi

    void retranslateUi(QWidget *painter)
    {
        painter->setWindowTitle(QApplication::translate("painter", "painter", nullptr));
        lineChangedGroup->setTitle(QApplication::translate("painter", "\346\233\262\347\272\277\345\217\202\346\225\260\346\223\215\344\275\234", nullptr));
        selectLIneButton->setText(QApplication::translate("painter", "\346\230\276\347\244\272", nullptr));
        showAllButton->setText(QApplication::translate("painter", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        hideAllButton->setText(QApplication::translate("painter", "\351\232\220\350\227\217\345\205\250\351\203\250", nullptr));
        viewGroup->setTitle(QApplication::translate("painter", "\345\214\272\351\227\264\346\230\276\347\244\272", nullptr));
        label_3->setText(QApplication::translate("painter", "\342\200\224\342\200\224", nullptr));
        showRegionTimeButton->setText(QApplication::translate("painter", "\346\230\276\347\244\272\345\214\272\351\227\264", nullptr));
        lineGroup->setTitle(QApplication::translate("painter", "\346\233\262\347\272\277\346\230\276\347\244\272\346\223\215\344\275\234", nullptr));
        pauseShowButton->setText(QApplication::translate("painter", "\345\274\200\345\247\213\346\230\276\347\244\272", nullptr));
        autoAbjustButton->setText(QApplication::translate("painter", "\350\207\252\345\212\250\350\260\203\346\225\264", nullptr));
        clearLineButton->setText(QApplication::translate("painter", "\346\270\205\351\231\244\350\241\250\346\240\274", nullptr));
        viewAllButton->setText(QApplication::translate("painter", "\346\230\276\347\244\272\345\205\250\346\227\266\345\210\273", nullptr));
        longestTimeGroup->setTitle(QApplication::translate("painter", "\346\234\200\351\225\277\346\230\276\347\244\272\346\227\266\351\227\264", nullptr));
        label->setText(QApplication::translate("painter", "\344\270\200\351\241\265\346\234\200\351\225\277\346\230\276\347\244\272", nullptr));
        longestTimeEdit->setText(QApplication::translate("painter", "3", nullptr));
        label_2->setText(QApplication::translate("painter", "S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class painter: public Ui_painter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_H
