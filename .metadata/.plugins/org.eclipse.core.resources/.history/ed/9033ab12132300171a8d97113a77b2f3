/**
 * \file Annuaire.cpp
 * \brief Implémentation de la classe Annuaire
 * \author Philippe Trépanier
 * \date 2017-03-29
 */

#include "Annuaire.h"
#include <sstream>
#include "ContratException.h"
#include <vector>

using namespace std;
namespace tp
{
/**
 * \brief Constructeur d'un nouvel objet de la classe Annuaire
 * \param[in] p_nomClub nom du club
 * \pre p_nomClub est un nom valide
 * \post p_nomClub prend la valeur de p_nomClub
 */
Annuaire::Annuaire(const string& p_nomClub) :
		m_nomClub(p_nomClub)
{
	PRECONDITION(!(p_nomClub.empty()));

	POSTCONDITION(p_nomClub == m_nomClub);
}

Annuaire::~Annuaire()
{
	vector<Personne*>::iterator it;
	for (it = m_vMembres.begin(); it < m_vMembres.end(); it++)
	{
		delete *it;
	}
	m_vMembres.clear();
}
/**
 * \brief Retourne la date de naissance de la personne
 * \return date de naissance de la personne
 */
string Annuaire::reqNom() const
{
	return m_nomClub;
}
/**
 * \brief Retourne une string contenant les informations contenues dans l'annuaire
 * \return informations de l'annuaire
 */
string Annuaire::reqAnnuaireFormate() const
{
	ostringstream os;
	os << "Club : " << reqNom() << endl;
	os << "---------------------" << endl;
	for (size_t i = 0; i < m_vMembres.size(); ++i)
	{
		os << (*m_vMembres[i]).reqPersonneFormate();
	}

	return os.str();
}
/**
 * \brief Permet l'ajoute d'une personne (Joueur ou entraineur) à l'annuaire
 * \param[in] p_personne Objet de type personne
 */
void Annuaire::ajouterPersonne(const Personne& p_personne)
{
	if (PersonneEstDejaPresente(p_personne) == false)
	{
		m_vMembres.push_back(p_personne.clone());
	}
	else
	{
		throw PersonneDejaPresenteException(p_personne.reqPersonneFormate());
	}

	INVARIANTS();
}
/**
 * \brief Vérifier les invariants de classe
 */
void Annuaire::verifieInvariant() const
{
	INVARIANT(!(m_nomClub.empty()));
}

bool Annuaire::PersonneEstDejaPresente(const Personne& p_personne) const
{
	vector<Personne*>::const_iterator it;
	for (it = m_vMembres.begin(); it < m_vMembres.end(); it++)
	{
//		if ((*it) == p_personne)
//		{
//			return true;
//		}
	}
	return false;
}

void Annuaire::supprimerPersonne(const std::string& p_nom, const std::string& p_prenom)
{
	unsigned int supprime = 0;
	vector<Personne*>::iterator it;
	for (it = m_vMembres.begin(); it < m_vMembres.end(); it++)
	{
		if ((*it)->reqNom() == p_nom && (*it)->reqPrenom() == p_prenom)
		{
			m_vMembres.erase(it);
			delete *it;
			supprime++;
		}
	}
	if (supprime == 0)
	{
		throw PersonneAbsenteException(p_nom);
	}
}

} /* namespace tp */

