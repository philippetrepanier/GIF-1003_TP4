/********************************************************************************
** Form generated from reading UI file 'ajouterjoueur.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERJOUEUR_H
#define UI_AJOUTERJOUEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajouterJoueurClass
{
public:

    void setupUi(QWidget *ajouterJoueurClass)
    {
        if (ajouterJoueurClass->objectName().isEmpty())
            ajouterJoueurClass->setObjectName(QString::fromUtf8("ajouterJoueurClass"));
        ajouterJoueurClass->resize(400, 300);

        retranslateUi(ajouterJoueurClass);

        QMetaObject::connectSlotsByName(ajouterJoueurClass);
    } // setupUi

    void retranslateUi(QWidget *ajouterJoueurClass)
    {
        ajouterJoueurClass->setWindowTitle(QApplication::translate("ajouterJoueurClass", "ajouterJoueur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterJoueurClass: public Ui_ajouterJoueurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOUEUR_H
