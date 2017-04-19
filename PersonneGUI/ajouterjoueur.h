/**
 * \file ajouterjoueur.h
 * \brief Déclaration de la classe ajouteurjoueur dérivé de la classe QDialog
 * \author Philippe Trépanier et Jérémie Roy
 * \date 2017-03-29
 */
#ifndef AJOUTERJOUEUR_H
#define AJOUTERJOUEUR_H

#include <QtGui/QDialog>
#include "ui_ajouterjoueur.h"
#include "validationFormat.h"

class ajouterJoueur: public QDialog
{
	Q_OBJECT

public:
	ajouterJoueur(QWidget *parent = 0);
	~ajouterJoueur();

	//Acesseurs
	QString reqNom() const;
	QString reqPrenom() const;
	QString reqTelephone() const;
	QString reqPosition() const;
	int reqJour() const;
	int reqMois() const;
	int reqAnnee() const;

private slots:
	void validerFormulaire();

private:
	Ui::ajouterJoueurClass ui;
};

#endif // AJOUTERJOUEUR_H
