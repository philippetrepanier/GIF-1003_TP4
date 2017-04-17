/**
 * \file PersonneException.cpp
 * \brief
 * \author Jérémie Roy et Philippe Trépanier
 * \date 2017-04-14
 */
#include "PersonneException.h"

using namespace std;

PersonneException::PersonneException(const std::string& raison) :
		runtime_error(raison)
{
}

PersonneDejaPresenteException::PersonneDejaPresenteException(const std::string& raison) :
		PersonneException(raison)
{
}

PersonneAbsenteException::PersonneAbsenteException(const std::string& raison) :
		PersonneException(raison)
{
}
