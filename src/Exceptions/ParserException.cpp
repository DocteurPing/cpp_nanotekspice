/*
** EPITECH PROJECT, 2018
** ParserException
** File description:
** ParserException
*/

#include "Exceptions/ParserException.hpp"

ParserException::ParserException(const std::string &message, const std::string &where)
{
	this->message = message;
	this->where = where;
}

const char *ParserException::what() const noexcept
{
	return (this->where.c_str());
}
