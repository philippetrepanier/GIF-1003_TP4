/**
 * \file PersonneException.h
 * \brief
 * \author Philippe Trépanier
 * \date 2017-04-14
 */

#ifndef PERSONNEEXCEPTION_H_
#define PERSONNEEXCEPTION_H_
#include <string>
#include <stdexcept>
/**
 * \class PersonneException
 * \brief Classe de base des exceptions de Personne.
 */
class PersonneException: public std::runtime_error
{
public:
	PersonneException(const std::string& raison);
};
/**
 * \class PersonneDejaPresenteException
 * \brief Classe pour la gestion des erreurs d'une personne déja présente lors de l'ajout.
 */

class PersonneDejaPresenteException: public PersonneException
{
public:
	PersonneDejaPresenteException(const std::string& raison);
};
/**
 * \class PreconditionException
 * \brief Classe pour la gestion des erreurs de précondition.
 */

class PersonneAbsenteException: public PersonneException
{
public:
	PersonneAbsenteException(const std::string& raison);
};

#endif /* PERSONNEEXCEPTION_H_ */
