/********************************************************************************
** Form generated from reading UI file 'passWin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWIN_H
#define UI_PASSWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *passwordEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *password;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *passWin)
    {
        if (passWin->objectName().isEmpty())
            passWin->setObjectName(QString::fromUtf8("passWin"));
        passWin->resize(300, 300);
        passWin->setMinimumSize(QSize(300, 300));
        passWin->setMaximumSize(QSize(300, 300));
        verticalLayout_2 = new QVBoxLayout(passWin);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(passWin);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        passwordEdit = new QLineEdit(passWin);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(passwordEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        password = new QPushButton(passWin);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout->addWidget(password);

        pushButton = new QPushButton(passWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(passWin);
        QObject::connect(pushButton, SIGNAL(clicked()), passWin, SLOT(close()));

        QMetaObject::connectSlotsByName(passWin);
    } // setupUi

    void retranslateUi(QWidget *passWin)
    {
        passWin->setWindowTitle(QApplication::translate("passWin", "passWin", nullptr));
        label->setText(QApplication::translate("passWin", "\345\257\206\347\240\201", nullptr));
        password->setText(QApplication::translate("passWin", "\347\231\273\345\275\225", nullptr));
        pushButton->setText(QApplication::translate("passWin", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passWin: public Ui_passWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWIN_H
