/*
** EPITECH PROJECT, 2017
** NtsException
** File description:
** NtsException
*/

#include "Exceptions/NtsException.hpp"

NtsException::NtsException(const std::string &what, const std::string &where)
{
	this->_what = what;
	this->_where = where;
}

const char *NtsException::what() const noexcept
{
	return (this->_what.c_str());
}

const char *NtsException::where() const noexcept
{
	return (this->_where.c_str());
}