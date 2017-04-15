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
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_supprimerPersonneClass
{
public:

    void setupUi(QDialog *supprimerPersonneClass)
    {
        if (supprimerPersonneClass->objectName().isEmpty())
            supprimerPersonneClass->setObjectName(QString::fromUtf8("supprimerPersonneClass"));
        supprimerPersonneClass->resize(400, 300);

        retranslateUi(supprimerPersonneClass);

        QMetaObject::connectSlotsByName(supprimerPersonneClass);
    } // setupUi

    void retranslateUi(QDialog *supprimerPersonneClass)
    {
        supprimerPersonneClass->setWindowTitle(QApplication::translate("supprimerPersonneClass", "Supprimer une personne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supprimerPersonneClass: public Ui_supprimerPersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERPERSONNE_H
