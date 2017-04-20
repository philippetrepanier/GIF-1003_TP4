/**
 * \file AnnuaireTesteur.cpp
 * \brief Test unitaire de la classe Annuaire
 * \author Jérémie Roy et Philippe Trépanier
 * \date 2017-04-06
 */

#include "Annuaire.h"
#include <gtest/gtest.h>
#include <string>
#include <iostream>

using namespace std;
using namespace util;
using namespace tp;
/**
 * \test Test du constructeur
 *
 * 		  Cas valides: Création d'un objet Annuaire avec un nom de club valide
 *		  Cas invalides:
 *		  		Nom de club invalide
 */
TEST(Annuaire, AnnuaireConstructeur)
{
	string nomClub = "unClub";
	Annuaire annuaire(nomClub);
	ASSERT_EQ(nomClub, annuaire.reqNom());
}
// cas invalide
TEST(Annuaire, AnnuaireConstructeurInvalide)
{
	string nomClub = "";
	ASSERT_THROW(Annuaire annuaire(nomClub), PreconditionException);
}
/**
 * \test Test de la méthode reqAnnuaireFormate()
 *
 *     Cas valide: vérifier le retour des informations sur l'Annuaire
 *     Cas invalide: aucun
 */
TEST(Annuaire, AnnuaireReqAnnuaireFormate)
{
	string nomClub = "unClub";
	Annuaire annuaire(nomClub);

	ostringstream os;
	os << "Club : " << nomClub << endl;
	os << "---------------------" << endl;

	ASSERT_EQ(os.str(), annuaire.reqAnnuaireFormate());
}
/**
 * \test Test de la méthode ajout de personne
 *
 * 		  Cas valides: Création d'un objet Annuaire avec un nom de club valide et ajout d'une personne
 */
TEST(Annuaire, AnnuaireAjouterPersonne)
{
	string nomClub = "unClub";
	string nomJoueur = "Maccali";
	string prenomJoueur = "Wong";
	Date dateNaissanceJoueur = Date(5, 5, 2001);
	string telephoneJoueur = "418 658-2222";
	string positionJoueur = "centre";

	Joueur unJoueur(nomJoueur,prenomJoueur, dateNaissanceJoueur, telephoneJoueur, positionJoueur);

	Annuaire annuaire(nomClub);

	annuaire.ajouterPersonne(unJoueur);

	ASSERT_EQ(1, annuaire.reqNombrePersonne());
};

/**
 * \brief Création d'une fixture à utiliser pour les méthodes de la classe Annuaire
 */
class AnnuaireParam: public ::testing::Test
{
public:
	string nomClub = "NOM DU CLUB";

	string nom_joueur = "Hockey";
	string prenom_joueur = "Joueur";
	Date dateNaissance_joueur = Date(5, 5, 2001);
	string telephone_joueur = "418 658-2222";
	string position_joueur = "CENTRE";

	string nom_ent = "Thibault";
	string prenom_ent = "Marc";
	Date dateNaissance_ent = Date(5, 5, 1980);
	string telephone_ent = "418 656-2177";
	char sexe_ent = 'M';
	string RAMQ_ent = "THIM 8005 0522";

	AnnuaireParam() :
			annuaire("NOM DU CLUB")
	{
		annuaire.ajouterPersonne(
				Joueur(nom_joueur, prenom_joueur, dateNaissance_joueur, telephone_joueur, position_joueur));
		annuaire.ajouterPersonne(Entraineur(nom_ent, prenom_ent, dateNaissance_ent, telephone_ent, RAMQ_ent, sexe_ent));
	}
	;

	Annuaire annuaire;

};
/**
 * \test Test de la méthode reqNom()
 *
 *     Cas valide: vérifier le retour de la fonction reqNom()
 *     Cas invalide: aucun
 */
TEST_F(AnnuaireParam, reqNomFixture)
{
	ASSERT_EQ(nomClub,annuaire.reqNom());
};
/**
 * \test Test de la méthode reqAnnuaireFormate()
 *
 *     Cas valide: vérifier le retour des informations de l'annuaire
 *     Cas invalide: aucun
 */
TEST_F(AnnuaireParam, reqAnnuaireFormate)
{
	ostringstream os;
	os << "Club : " << annuaire.reqNom() << endl;
	os << "---------------------" << endl;
	os << Joueur(nom_joueur, prenom_joueur, dateNaissance_joueur, telephone_joueur, position_joueur).reqPersonneFormate();
	os << Entraineur(nom_ent, prenom_ent, dateNaissance_ent, telephone_ent, RAMQ_ent, sexe_ent).reqPersonneFormate();

	ASSERT_EQ(os.str(), annuaire.reqAnnuaireFormate());
};

/**
 * \test Test de la méthode suprimerPersonne()
 *
 *     Cas valide: vérifier le retour des informations de l'annuaire
 *     Cas invalide: aucun
 */

TEST_F(AnnuaireParam, supprimerPersonne)
{
	unsigned int tailleInitiale = annuaire.reqNombrePersonne();

	annuaire.supprimerPersonne(nom_joueur, prenom_joueur);

	ASSERT_LT(annuaire.reqNombrePersonne(), tailleInitiale);
};
/**
 * \test Test de la méthode PersonneEstDejaPresente()
 *
 *     Cas invalide: une personne qui est deja dans le vecteur
 */

TEST_F(AnnuaireParam, personneEstDejaPresente)
{
	EXPECT_THROW(annuaire.ajouterPersonne(
					Joueur(nom_joueur, prenom_joueur, dateNaissance_joueur, telephone_joueur, position_joueur)), PersonneDejaPresenteException);
};
