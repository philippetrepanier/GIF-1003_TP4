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

class Ui_ajouterEntraineurClass
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *nomLabel;
    QLineEdit *nomlineEdit;
    QLabel *prenomLabel;
    QLineEdit *prenomlineEdit;
    QLabel *labelTel;
    QLineEdit *telephonelineEdit;
    QLabel *ramqLabel;
    QLineEdit *ramqlineEdit;
    QLabel *dateNaissanceLabel;
    QLabel *label;
    QComboBox *sexeComboBox;
    QPushButton *annulerpushButton;
    QPushButton *OKpushButton;
    QGridLayout *gridLayout_2;
    QSpinBox *jourspinBox;
    QSpinBox *moisspinBox;
    QSpinBox *anneespinBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *ajouterEntraineurClass)
    {
        if (ajouterEntraineurClass->objectName().isEmpty())
            ajouterEntraineurClass->setObjectName(QString::fromUtf8("ajouterEntraineurClass"));
        ajouterEntraineurClass->resize(430, 275);
        ajouterEntraineurClass->setMinimumSize(QSize(410, 275));
        ajouterEntraineurClass->setMaximumSize(QSize(430, 275));
        gridLayoutWidget = new QWidget(ajouterEntraineurClass);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 411, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nomLabel = new QLabel(gridLayoutWidget);
        nomLabel->setObjectName(QString::fromUtf8("nomLabel"));

        gridLayout->addWidget(nomLabel, 0, 0, 1, 1);

        nomlineEdit = new QLineEdit(gridLayoutWidget);
        nomlineEdit->setObjectName(QString::fromUtf8("nomlineEdit"));

        gridLayout->addWidget(nomlineEdit, 0, 2, 1, 1);

        prenomLabel = new QLabel(gridLayoutWidget);
        prenomLabel->setObjectName(QString::fromUtf8("prenomLabel"));

        gridLayout->addWidget(prenomLabel, 1, 0, 1, 1);

        prenomlineEdit = new QLineEdit(gridLayoutWidget);
        prenomlineEdit->setObjectName(QString::fromUtf8("prenomlineEdit"));

        gridLayout->addWidget(prenomlineEdit, 1, 2, 1, 1);

        labelTel = new QLabel(gridLayoutWidget);
        labelTel->setObjectName(QString::fromUtf8("labelTel"));
        labelTel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelTel, 2, 0, 1, 1);

        telephonelineEdit = new QLineEdit(gridLayoutWidget);
        telephonelineEdit->setObjectName(QString::fromUtf8("telephonelineEdit"));

        gridLayout->addWidget(telephonelineEdit, 2, 2, 1, 1);

        ramqLabel = new QLabel(gridLayoutWidget);
        ramqLabel->setObjectName(QString::fromUtf8("ramqLabel"));

        gridLayout->addWidget(ramqLabel, 3, 0, 1, 1);

        ramqlineEdit = new QLineEdit(gridLayoutWidget);
        ramqlineEdit->setObjectName(QString::fromUtf8("ramqlineEdit"));

        gridLayout->addWidget(ramqlineEdit, 3, 2, 1, 1);

        dateNaissanceLabel = new QLabel(gridLayoutWidget);
        dateNaissanceLabel->setObjectName(QString::fromUtf8("dateNaissanceLabel"));

        gridLayout->addWidget(dateNaissanceLabel, 5, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        sexeComboBox = new QComboBox(gridLayoutWidget);
        sexeComboBox->setObjectName(QString::fromUtf8("sexeComboBox"));

        gridLayout->addWidget(sexeComboBox, 4, 2, 1, 1);

        annulerpushButton = new QPushButton(gridLayoutWidget);
        annulerpushButton->setObjectName(QString::fromUtf8("annulerpushButton"));

        gridLayout->addWidget(annulerpushButton, 6, 0, 1, 1);

        OKpushButton = new QPushButton(gridLayoutWidget);
        OKpushButton->setObjectName(QString::fromUtf8("OKpushButton"));

        gridLayout->addWidget(OKpushButton, 6, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        jourspinBox = new QSpinBox(gridLayoutWidget);
        jourspinBox->setObjectName(QString::fromUtf8("jourspinBox"));
        jourspinBox->setMinimum(1);
        jourspinBox->setMaximum(31);

        gridLayout_2->addWidget(jourspinBox, 0, 0, 1, 1);

        moisspinBox = new QSpinBox(gridLayoutWidget);
        moisspinBox->setObjectName(QString::fromUtf8("moisspinBox"));
        moisspinBox->setMinimum(1);
        moisspinBox->setMaximum(12);

        gridLayout_2->addWidget(moisspinBox, 0, 1, 1, 1);

        anneespinBox = new QSpinBox(gridLayoutWidget);
        anneespinBox->setObjectName(QString::fromUtf8("anneespinBox"));
        anneespinBox->setMinimum(1970);
        anneespinBox->setMaximum(2036);

        gridLayout_2->addWidget(anneespinBox, 0, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 5, 2, 1, 1);


        retranslateUi(ajouterEntraineurClass);

        QMetaObject::connectSlotsByName(ajouterEntraineurClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterEntraineurClass)
    {
        ajouterEntraineurClass->setWindowTitle(QApplication::translate("ajouterEntraineurClass", "Ajouter un entraineur", 0, QApplication::UnicodeUTF8));
        nomLabel->setText(QApplication::translate("ajouterEntraineurClass", "Nom", 0, QApplication::UnicodeUTF8));
        prenomLabel->setText(QApplication::translate("ajouterEntraineurClass", "Prenom", 0, QApplication::UnicodeUTF8));
        labelTel->setText(QApplication::translate("ajouterEntraineurClass", "Num\303\251ro de t\303\251l\303\251phone\n"
"(XXX XXX-XXXX)", 0, QApplication::UnicodeUTF8));
        ramqLabel->setText(QApplication::translate("ajouterEntraineurClass", "Num\303\251ro de RAMQ", 0, QApplication::UnicodeUTF8));
        dateNaissanceLabel->setText(QApplication::translate("ajouterEntraineurClass", "Date de naissance", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajouterEntraineurClass", "Sexe", 0, QApplication::UnicodeUTF8));
        annulerpushButton->setText(QApplication::translate("ajouterEntraineurClass", "Annuler", 0, QApplication::UnicodeUTF8));
        OKpushButton->setText(QApplication::translate("ajouterEntraineurClass", "Ajouter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajouterEntraineurClass", "Jour", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajouterEntraineurClass", "Mois", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajouterEntraineurClass", "Ann\303\251e", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterEntraineurClass: public Ui_ajouterEntraineurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERENTRAINEUR_H
