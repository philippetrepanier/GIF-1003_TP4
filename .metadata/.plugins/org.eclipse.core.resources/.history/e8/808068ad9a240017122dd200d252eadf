#include "personnegui.h"
#include "Annuaire.h"
#include "ajouterentraineur.h"
#include "ajouterjoueur.h"
#include "supprimerpersonne.h"
#include "PersonneException.h"
#include <QMessageBox>

using namespace std;
using namespace tp;

PersonneGUI::PersonneGUI(QWidget *parent) :
		QMainWindow(parent), annuaire(NOMCLUB)
{
	ui.setupUi(this);
	QObject::connect(ui.actionEntraineur, SIGNAL(triggered()), this, SLOT(dialogEntraineur()));
	QObject::connect(ui.actionJoueur, SIGNAL(triggered()), this, SLOT(dialogJoueur()));
	QObject::connect(ui.actionSupprimer, SIGNAL(triggered()), this, SLOT(dialogSupprimer()));

}

PersonneGUI::~PersonneGUI()
{

}

void PersonneGUI::dialogEntraineur()
{
	ajouterEntraineur saisieEntraineur(this);
	if (saisieEntraineur.exec())
	{
		try
		{
			util::Date dateNaissance(saisieEntraineur.reqJour(), saisieEntraineur.reqMois(),
					saisieEntraineur.reqAnnee());
			tp::Entraineur entraineur(saisieEntraineur.reqNom().toStdString(),
					saisieEntraineur.reqPrenom().toStdString(), dateNaissance,
					saisieEntraineur.reqTelephone().toStdString(), saisieEntraineur.reqNumRamq().toStdString(),
					saisieEntraineur.reqSexe());
			annuaire.ajouterPersonne(entraineur);
		} catch (PersonneDejaPresenteException &e)
		{
			QString message = "La personne est deja presente dans l'annuaire ";
			message.append(e.what());
			QMessageBox::warning(this, "La personne est deja presente!", message);
		}

		ui.textEdit->setText(annuaire.reqAnnuaireFormate().c_str());

	}
}

void PersonneGUI::dialogJoueur()
{
	ajouterJoueur saisieJoueur(this);
	if (saisieJoueur.exec())
	{
		try
		{
			util::Date dateNaissance(saisieJoueur.reqJour(), saisieJoueur.reqMois(), saisieJoueur.reqAnnee());
			tp::Joueur joueur(saisieJoueur.reqNom().toStdString(), saisieJoueur.reqPrenom().toStdString(),
					dateNaissance, saisieJoueur.reqTelephone().toStdString(), saisieJoueur.reqPosition().toStdString());
			annuaire.ajouterPersonne(joueur);
		} catch (PersonneDejaPresenteException &e)
		{
			QString message = "La personne est deja presente dans l'annuaire \n";
			message.append(e.what());
			QMessageBox::warning(this, "La personne est deja presente!", message);
		}

		ui.textEdit->setText(annuaire.reqAnnuaireFormate().c_str());

	}
}

void PersonneGUI::dialogSupprimer()
{
	supprimerPersonne saisieSupprimer(this);
	if (saisieSupprimer.exec())
	{
		try
		{
			annuaire.supprimerPersonne(saisieSupprimer.reqNom().toStdString(),
					saisieSupprimer.reqPrenom().toStdString());
		} catch (PersonneAbsenteException &e)
		{
			QString message = "La personne est absente de l'annuaire \n";
			message.append(e.what());
			QMessageBox::warning(this, "La personne est absente!", message);
		}

		ui.textEdit->setText(annuaire.reqAnnuaireFormate().c_str());
	}
}
