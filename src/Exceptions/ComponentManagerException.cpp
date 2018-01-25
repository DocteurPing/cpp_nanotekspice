/*
** EPITECH PROJECT, 2018
** ComponentManagerException
** File description:
** ComponentManagerException
*/

#include "Exceptions/ComponentManagerException.hpp"

ComponentManagerException::ComponentManagerException(
	const std::string &what, const std::string &where)
		: NtsException(what, where)
{
}
