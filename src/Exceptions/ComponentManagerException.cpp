/*
** EPITECH PROJECT, 2018
** ComponentManagerException
** File description:
** ComponentManagerException
*/

#include "Exceptions/ComponentManagerException.hpp"

ComponentManagerException::ComponentManagerException(
	const std::string &message, const std::string &where)
{
	this->message = message;
	this->where = where;
}

const char *ComponentManagerException::what() const noexcept
{
	return (this->where.c_str());
}
