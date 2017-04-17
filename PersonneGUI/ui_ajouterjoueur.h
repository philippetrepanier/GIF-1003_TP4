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
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajouterJoueurClass
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *nomLabel;
    QLabel *label_naissance;
    QLabel *label_prenom;
    QLabel *label_tel;
    QLabel *label_position;
    QLineEdit *nomlineEdit;
    QLineEdit *prenomlineEdit;
    QLineEdit *telephonelineEdit;
    QGridLayout *gridLayout_2;
    QSpinBox *jourspinBox;
    QSpinBox *moisspinBox;
    QSpinBox *anneespinBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *annulerpushButton;
    QPushButton *OKpushButton;
    QComboBox *positioncomboBox;

    void setupUi(QDialog *ajouterJoueurClass)
    {
        if (ajouterJoueurClass->objectName().isEmpty())
            ajouterJoueurClass->setObjectName(QString::fromUtf8("ajouterJoueurClass"));
        ajouterJoueurClass->resize(430, 245);
        ajouterJoueurClass->setMinimumSize(QSize(410, 230));
        ajouterJoueurClass->setMaximumSize(QSize(430, 245));
        gridLayoutWidget = new QWidget(ajouterJoueurClass);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 411, 225));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nomLabel = new QLabel(gridLayoutWidget);
        nomLabel->setObjectName(QString::fromUtf8("nomLabel"));

        gridLayout->addWidget(nomLabel, 0, 0, 1, 1);

        label_naissance = new QLabel(gridLayoutWidget);
        label_naissance->setObjectName(QString::fromUtf8("label_naissance"));

        gridLayout->addWidget(label_naissance, 4, 0, 1, 1);

        label_prenom = new QLabel(gridLayoutWidget);
        label_prenom->setObjectName(QString::fromUtf8("label_prenom"));

        gridLayout->addWidget(label_prenom, 1, 0, 1, 1);

        label_tel = new QLabel(gridLayoutWidget);
        label_tel->setObjectName(QString::fromUtf8("label_tel"));
        label_tel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_tel, 2, 0, 1, 1);

        label_position = new QLabel(gridLayoutWidget);
        label_position->setObjectName(QString::fromUtf8("label_position"));

        gridLayout->addWidget(label_position, 3, 0, 1, 1);

        nomlineEdit = new QLineEdit(gridLayoutWidget);
        nomlineEdit->setObjectName(QString::fromUtf8("nomlineEdit"));

        gridLayout->addWidget(nomlineEdit, 0, 1, 1, 1);

        prenomlineEdit = new QLineEdit(gridLayoutWidget);
        prenomlineEdit->setObjectName(QString::fromUtf8("prenomlineEdit"));

        gridLayout->addWidget(prenomlineEdit, 1, 1, 1, 1);

        telephonelineEdit = new QLineEdit(gridLayoutWidget);
        telephonelineEdit->setObjectName(QString::fromUtf8("telephonelineEdit"));

        gridLayout->addWidget(telephonelineEdit, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        jourspinBox = new QSpinBox(gridLayoutWidget);
        jourspinBox->setObjectName(QString::fromUtf8("jourspinBox"));
        jourspinBox->setAcceptDrops(true);
        jourspinBox->setAlignment(Qt::AlignCenter);
        jourspinBox->setMinimum(1);
        jourspinBox->setMaximum(31);

        gridLayout_2->addWidget(jourspinBox, 0, 0, 1, 1);

        moisspinBox = new QSpinBox(gridLayoutWidget);
        moisspinBox->setObjectName(QString::fromUtf8("moisspinBox"));
        moisspinBox->setAcceptDrops(true);
        moisspinBox->setAlignment(Qt::AlignCenter);
        moisspinBox->setMinimum(1);
        moisspinBox->setMaximum(12);

        gridLayout_2->addWidget(moisspinBox, 0, 1, 1, 1);

        anneespinBox = new QSpinBox(gridLayoutWidget);
        anneespinBox->setObjectName(QString::fromUtf8("anneespinBox"));
        anneespinBox->setAcceptDrops(true);
        anneespinBox->setAlignment(Qt::AlignCenter);
        anneespinBox->setMinimum(1970);
        anneespinBox->setMaximum(2036);
        anneespinBox->setValue(2000);

        gridLayout_2->addWidget(anneespinBox, 0, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 1, 1, 1);

        annulerpushButton = new QPushButton(gridLayoutWidget);
        annulerpushButton->setObjectName(QString::fromUtf8("annulerpushButton"));

        gridLayout->addWidget(annulerpushButton, 5, 0, 1, 1);

        OKpushButton = new QPushButton(gridLayoutWidget);
        OKpushButton->setObjectName(QString::fromUtf8("OKpushButton"));
        OKpushButton->setCursor(QCursor(Qt::CrossCursor));

        gridLayout->addWidget(OKpushButton, 5, 1, 1, 1);

        positioncomboBox = new QComboBox(gridLayoutWidget);
        positioncomboBox->setObjectName(QString::fromUtf8("positioncomboBox"));
        positioncomboBox->setLayoutDirection(Qt::LeftToRight);
        positioncomboBox->setEditable(false);
        positioncomboBox->setMaxVisibleItems(4);
        positioncomboBox->setMaxCount(4);
        positioncomboBox->setFrame(true);

        gridLayout->addWidget(positioncomboBox, 3, 1, 1, 1);

        QWidget::setTabOrder(nomlineEdit, prenomlineEdit);
        QWidget::setTabOrder(prenomlineEdit, telephonelineEdit);
        QWidget::setTabOrder(telephonelineEdit, positioncomboBox);
        QWidget::setTabOrder(positioncomboBox, jourspinBox);
        QWidget::setTabOrder(jourspinBox, moisspinBox);
        QWidget::setTabOrder(moisspinBox, anneespinBox);
        QWidget::setTabOrder(anneespinBox, OKpushButton);
        QWidget::setTabOrder(OKpushButton, annulerpushButton);

        retranslateUi(ajouterJoueurClass);
        QObject::connect(annulerpushButton, SIGNAL(clicked()), ajouterJoueurClass, SLOT(close()));

        positioncomboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ajouterJoueurClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterJoueurClass)
    {
        ajouterJoueurClass->setWindowTitle(QApplication::translate("ajouterJoueurClass", "Ajouter un joueur", 0, QApplication::UnicodeUTF8));
        nomLabel->setText(QApplication::translate("ajouterJoueurClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_naissance->setText(QApplication::translate("ajouterJoueurClass", "Date de naissance", 0, QApplication::UnicodeUTF8));
        label_prenom->setText(QApplication::translate("ajouterJoueurClass", "Prenom", 0, QApplication::UnicodeUTF8));
        label_tel->setText(QApplication::translate("ajouterJoueurClass", "Num\303\251ro de t\303\251l\303\251phone\n"
"(XXX XXX-XXXX)", 0, QApplication::UnicodeUTF8));
        label_position->setText(QApplication::translate("ajouterJoueurClass", "Position", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ajouterJoueurClass", "Jour", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ajouterJoueurClass", "Mois", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ajouterJoueurClass", "Ann\303\251e", 0, QApplication::UnicodeUTF8));
        annulerpushButton->setText(QApplication::translate("ajouterJoueurClass", "Annuler", 0, QApplication::UnicodeUTF8));
        OKpushButton->setText(QApplication::translate("ajouterJoueurClass", "Ajouter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterJoueurClass: public Ui_ajouterJoueurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOUEUR_H
