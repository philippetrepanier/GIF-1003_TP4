/**
 * \file Annuaire.h
 * \brief Classe Annuaire
 * \author Jérémie Roy et Philippe Trépanier
 * \date 2017-03-29
 */

#ifndef ANNUAIRE_H_
#define ANNUAIRE_H_
#include <string>
#include <vector>
#include "Joueur.h"
#include "Entraineur.h"
#include "PersonneException.h"
#include "ContratException.h"

namespace tp
{
/**
 * \class Annuaire
 * \brief Classe annuaire qui contient les Joueurs et les Entraineurs de l'équipe
 * 			Elle contient un attribut avec le nom du club.
 * 	        Une méthode permet de renvoyer l'annuaire sous une chaine de caractère formatée
 */
class Annuaire
{
public:
	Annuaire(const std::string& p_nomClub);
	~Annuaire();
	std::string reqNom() const;
	std::string reqAnnuaireFormate() const;

	void ajouterPersonne(const Personne& p_personne);
	void supprimerPersonne(const std::string& p_nom, const std::string& p_prenom);

	unsigned int reqNombrePersonne() const;

	//-- Protection contre la copie de surface
	Annuaire(const Annuaire&)
	{
	}
	;
	Annuaire& operator=(const Annuaire&)
	{
	}
	;

private:
	void verifieInvariant() const;
	std::string m_nomClub;
	std::vector<Personne*> m_vMembres;

	bool PersonneEstDejaPresente(const Personne& p_personne) const;

};

} /* namespace tp */

#endif /* ANNUAIRE_H_ */
