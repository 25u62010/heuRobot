/********************************************************************************
** Form generated from reading UI file 'saveTableDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVETABLEDIALOG_H
#define UI_SAVETABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_saveTableDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *dirEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *broseButton;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelButton;
    QPushButton *saveButton;

    void setupUi(QDialog *saveTableDialog)
    {
        if (saveTableDialog->objectName().isEmpty())
            saveTableDialog->setObjectName(QString::fromUtf8("saveTableDialog"));
        saveTableDialog->resize(450, 179);
        verticalLayout_2 = new QVBoxLayout(saveTableDialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(saveTableDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        dirEdit = new QLineEdit(saveTableDialog);
        dirEdit->setObjectName(QString::fromUtf8("dirEdit"));

        horizontalLayout_3->addWidget(dirEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        broseButton = new QPushButton(saveTableDialog);
        broseButton->setObjectName(QString::fromUtf8("broseButton"));

        horizontalLayout_2->addWidget(broseButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cancelButton = new QPushButton(saveTableDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        saveButton = new QPushButton(saveTableDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(saveTableDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), saveTableDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(saveTableDialog);
    } // setupUi

    void retranslateUi(QDialog *saveTableDialog)
    {
        saveTableDialog->setWindowTitle(QApplication::translate("saveTableDialog", "saveTableDialog", nullptr));
        label->setText(QApplication::translate("saveTableDialog", "\344\277\235\345\255\230\345\234\260\345\235\200", nullptr));
        broseButton->setText(QApplication::translate("saveTableDialog", "\346\265\217\350\247\210", nullptr));
        cancelButton->setText(QApplication::translate("saveTableDialog", "\345\217\226\346\266\210", nullptr));
        saveButton->setText(QApplication::translate("saveTableDialog", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saveTableDialog: public Ui_saveTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVETABLEDIALOG_H
