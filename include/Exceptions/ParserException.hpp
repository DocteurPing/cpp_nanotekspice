/*
** EPITECH PROJECT, 2018
** ParserException
** File description:
** ParserException
*/

#ifndef PARSEREXCEPTION_HPP_
	#define PARSEREXCEPTION_HPP_

#include "Exceptions/NtsException.hpp"

class ParserException : public NtsException
{
	public:
	ParserException(const std::string &what, const std::string &where);
	~ParserException() = default;
};

#endif /* !PARSEREXCEPTION_HPP_ */
