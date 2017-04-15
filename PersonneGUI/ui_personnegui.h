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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonneGUIClass
{
public:
    QAction *actionSupprimer;
    QAction *actionQuitter;
    QAction *actionEntraineur;
    QAction *actionJoueur;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuAjouter;
    QMenu *menuAjouter_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PersonneGUIClass)
    {
        if (PersonneGUIClass->objectName().isEmpty())
            PersonneGUIClass->setObjectName(QString::fromUtf8("PersonneGUIClass"));
        PersonneGUIClass->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PersonneGUIClass->sizePolicy().hasHeightForWidth());
        PersonneGUIClass->setSizePolicy(sizePolicy);
        PersonneGUIClass->setMinimumSize(QSize(500, 500));
        PersonneGUIClass->setMaximumSize(QSize(500, 500));
        actionSupprimer = new QAction(PersonneGUIClass);
        actionSupprimer->setObjectName(QString::fromUtf8("actionSupprimer"));
        actionQuitter = new QAction(PersonneGUIClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionEntraineur = new QAction(PersonneGUIClass);
        actionEntraineur->setObjectName(QString::fromUtf8("actionEntraineur"));
        actionJoueur = new QAction(PersonneGUIClass);
        actionJoueur->setObjectName(QString::fromUtf8("actionJoueur"));
        centralwidget = new QWidget(PersonneGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 501, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(12);
        textEdit->setFont(font);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::BusyCursor)));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        PersonneGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PersonneGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 27));
        menuAjouter = new QMenu(menubar);
        menuAjouter->setObjectName(QString::fromUtf8("menuAjouter"));
        menuAjouter_2 = new QMenu(menuAjouter);
        menuAjouter_2->setObjectName(QString::fromUtf8("menuAjouter_2"));
        PersonneGUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(PersonneGUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PersonneGUIClass->setStatusBar(statusbar);

        menubar->addAction(menuAjouter->menuAction());
        menuAjouter->addAction(menuAjouter_2->menuAction());
        menuAjouter->addAction(actionSupprimer);
        menuAjouter->addAction(actionQuitter);
        menuAjouter_2->addAction(actionEntraineur);
        menuAjouter_2->addAction(actionJoueur);

        retranslateUi(PersonneGUIClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), PersonneGUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(PersonneGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *PersonneGUIClass)
    {
        PersonneGUIClass->setWindowTitle(QApplication::translate("PersonneGUIClass", "Annuaire", 0, QApplication::UnicodeUTF8));
        actionSupprimer->setText(QApplication::translate("PersonneGUIClass", "Supprimer", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("PersonneGUIClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionEntraineur->setText(QApplication::translate("PersonneGUIClass", "Entraineur", 0, QApplication::UnicodeUTF8));
        actionJoueur->setText(QApplication::translate("PersonneGUIClass", "Joueur", 0, QApplication::UnicodeUTF8));
        menuAjouter->setTitle(QApplication::translate("PersonneGUIClass", "Menu", 0, QApplication::UnicodeUTF8));
        menuAjouter_2->setTitle(QApplication::translate("PersonneGUIClass", "Ajouter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PersonneGUIClass: public Ui_PersonneGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNEGUI_H
