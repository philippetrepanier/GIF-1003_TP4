/**
 * \file supprimerpersonne.h
 * \brief Déclaration la classe supprimerPersonne dérivé de QDialog
 * \author Philippe Trépanier et Jérémie Roy
 * \date 2017-03-29
 */

#ifndef SUPPRIMERPERSONNE_H
#define SUPPRIMERPERSONNE_H

#include <QtGui/QDialog>
#include "ui_supprimerpersonne.h"

class supprimerPersonne: public QDialog
{
	Q_OBJECT

public:
	supprimerPersonne(QWidget *parent = 0);
	~supprimerPersonne();

	//Accessuers
	QString reqNom() const;
	QString reqPrenom() const;

private slots:
	void validerFormulaire();

private:
	Ui::supprimerPersonneClass ui;
};

#endif // SUPPRIMERPERSONNE_H
