/********************************************************************************
** Form generated from reading UI file 'ajouterentraineur.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERENTRAINEUR_H
#define UI_AJOUTERENTRAINEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ajouterEntraineurClass
{
public:

    void setupUi(QDialog *ajouterEntraineurClass)
    {
        if (ajouterEntraineurClass->objectName().isEmpty())
            ajouterEntraineurClass->setObjectName(QString::fromUtf8("ajouterEntraineurClass"));
        ajouterEntraineurClass->resize(400, 300);

        retranslateUi(ajouterEntraineurClass);

        QMetaObject::connectSlotsByName(ajouterEntraineurClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterEntraineurClass)
    {
        ajouterEntraineurClass->setWindowTitle(QApplication::translate("ajouterEntraineurClass", "ajouterEntraineur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterEntraineurClass: public Ui_ajouterEntraineurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERENTRAINEUR_H
