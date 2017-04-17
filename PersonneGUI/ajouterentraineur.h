#ifndef AJOUTERENTRAINEUR_H
#define AJOUTERENTRAINEUR_H

#include <QtGui/QDialog>
#include "ui_ajouterentraineur.h"
#include "validationFormat.h"

class ajouterEntraineur: public QDialog
{
	Q_OBJECT

public:
	ajouterEntraineur(QWidget *parent = 0);
	~ajouterEntraineur();

	//Acesseurs
	QString reqNom() const;
	QString reqPrenom() const;
	QString reqTelephone() const;
	char reqSexe() const;
	QString reqNumRamq() const;
	int reqJour() const;
	int reqMois() const;
	int reqAnnee() const;

private slots:
	void validerFormulaire();

private:
	Ui::ajouterEntraineurClass ui;
};

#endif // AJOUTERENTRAINEUR_H
