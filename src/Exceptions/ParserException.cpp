/*
** EPITECH PROJECT, 2018
** ParserException
** File description:
** ParserException
*/

#include "Exceptions/ParserException.hpp"

ParserException::ParserException(const std::string &what, const std::string &where)
	: NtsException(what, where)
{
}