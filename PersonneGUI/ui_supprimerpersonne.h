/********************************************************************************
** Form generated from reading UI file 'supprimerpersonne.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERPERSONNE_H
#define UI_SUPPRIMERPERSONNE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_supprimerPersonneClass
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QGridLayout *gridLayout_2;
    QPushButton *AnnulerPushButton;
    QLineEdit *nomLineEdit;
    QLineEdit *prenomLineEdit;
    QPushButton *supprimerPersonnePushButton;

    void setupUi(QDialog *supprimerPersonneClass)
    {
        if (supprimerPersonneClass->objectName().isEmpty())
            supprimerPersonneClass->setObjectName(QString::fromUtf8("supprimerPersonneClass"));
        supprimerPersonneClass->resize(344, 140);
        gridLayout_3 = new QGridLayout(supprimerPersonneClass);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(supprimerPersonneClass);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(supprimerPersonneClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        AnnulerPushButton = new QPushButton(supprimerPersonneClass);
        AnnulerPushButton->setObjectName(QString::fromUtf8("AnnulerPushButton"));

        gridLayout_2->addWidget(AnnulerPushButton, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        nomLineEdit = new QLineEdit(supprimerPersonneClass);
        nomLineEdit->setObjectName(QString::fromUtf8("nomLineEdit"));

        gridLayout->addWidget(nomLineEdit, 0, 1, 1, 1);

        prenomLineEdit = new QLineEdit(supprimerPersonneClass);
        prenomLineEdit->setObjectName(QString::fromUtf8("prenomLineEdit"));

        gridLayout->addWidget(prenomLineEdit, 1, 1, 1, 1);

        supprimerPersonnePushButton = new QPushButton(supprimerPersonneClass);
        supprimerPersonnePushButton->setObjectName(QString::fromUtf8("supprimerPersonnePushButton"));

        gridLayout->addWidget(supprimerPersonnePushButton, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(supprimerPersonneClass);
        QObject::connect(AnnulerPushButton, SIGNAL(clicked()), supprimerPersonneClass, SLOT(close()));

        QMetaObject::connectSlotsByName(supprimerPersonneClass);
    } // setupUi

    void retranslateUi(QDialog *supprimerPersonneClass)
    {
        supprimerPersonneClass->setWindowTitle(QApplication::translate("supprimerPersonneClass", "Supprimer une personne", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("supprimerPersonneClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("supprimerPersonneClass", "Prenom", 0, QApplication::UnicodeUTF8));
        AnnulerPushButton->setText(QApplication::translate("supprimerPersonneClass", "Annuler", 0, QApplication::UnicodeUTF8));
        supprimerPersonnePushButton->setText(QApplication::translate("supprimerPersonneClass", "Supprimer personne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supprimerPersonneClass: public Ui_supprimerPersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERPERSONNE_H
