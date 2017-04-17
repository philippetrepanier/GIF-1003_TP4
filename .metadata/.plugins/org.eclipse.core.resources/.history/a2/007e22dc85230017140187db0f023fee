#include "personnegui.h"
#include "Annuaire.h"
#include "ajouterentraineur.h"
#include "ajouterjoueur.h"
#include "supprimerpersonne.h"
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
	saisieEntraineur.exec();
}

void PersonneGUI::dialogJoueur()
{
	ajouterJoueur saisieJoueur(this);
	if (saisieJoueur.exec())
	{
		util::Date dateNaissance(saisieJoueur.reqJour(), saisieJoueur.reqMois(), saisieJoueur.reqAnnee());
		tp::Joueur joueur(saisieJoueur.reqNom().toStdString(), saisieJoueur.reqPrenom().toStdString(), dateNaissance,
				saisieJoueur.reqTelephone().toStdString(), saisieJoueur.reqPosition().toStdString());
		annuaire.ajouterPersonne(joueur);

		ui.textEdit->setText(annuaire.reqAnnuaireFormate().c_str());

	}
}

void PersonneGUI::dialogSupprimer()
{
	supprimerPersonne saisieSupprimer(this);
	saisieSupprimer.exec();
}
