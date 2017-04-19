#include "supprimerpersonne.h"
#include <QMessageBox>

supprimerPersonne::supprimerPersonne(QWidget *parent) :
		QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.supprimerPersonnePushButton, SIGNAL(clicked()), this, SLOT(validerFormulaire()));
}

supprimerPersonne::~supprimerPersonne()
{

}

void supprimerPersonne::validerFormulaire()
{
	QMessageBox msgBox;
	msgBox.setText("Voulez-vous supprimer la personne?");
	msgBox.setIcon(QMessageBox::Warning);
	msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
	msgBox.setDefaultButton(QMessageBox::Yes);
	int ret = msgBox.exec();

	switch (ret)
	{
	case QMessageBox::Yes:
		// Save was clicked
		accept();
		break;
	case QMessageBox::No:
		// retour au formulaire de suppression de personne
		break;
	default:
		// Ce cas n'est pas supposé se produire
		break;
	}

}

//Accesseur pour les attributs
QString supprimerPersonne::reqNom() const
{
	return (ui.nomLineEdit->text());
}
QString supprimerPersonne::reqPrenom() const
{
	return (ui.prenomLineEdit->text());
}
