/*
** EPITECH PROJECT, 2017
** ComponentException
** File description:
** ComponentException
*/

#include "Exceptions/ComponentException.hpp"

ComponentException::ComponentException(const std::string &what, const std::string &where)
	: NtsException(what, where)
{
}
