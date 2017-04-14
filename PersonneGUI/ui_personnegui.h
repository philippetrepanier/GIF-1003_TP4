/********************************************************************************
** Form generated from reading UI file 'personnegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNEGUI_H
#define UI_PERSONNEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonneGUIClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PersonneGUIClass)
    {
        if (PersonneGUIClass->objectName().isEmpty())
            PersonneGUIClass->setObjectName(QString::fromUtf8("PersonneGUIClass"));
        PersonneGUIClass->resize(800, 600);
        centralwidget = new QWidget(PersonneGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PersonneGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PersonneGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        PersonneGUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(PersonneGUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PersonneGUIClass->setStatusBar(statusbar);

        retranslateUi(PersonneGUIClass);

        QMetaObject::connectSlotsByName(PersonneGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *PersonneGUIClass)
    {
        PersonneGUIClass->setWindowTitle(QApplication::translate("PersonneGUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PersonneGUIClass: public Ui_PersonneGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNEGUI_H
