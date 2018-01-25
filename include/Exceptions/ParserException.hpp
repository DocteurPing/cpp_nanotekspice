/*
** EPITECH PROJECT, 2018
** ParserException
** File description:
** ParserException
*/

#ifndef PARSEREXCEPTION_HPP_
	#define PARSEREXCEPTION_HPP_

#include <string>
#include <exception>

class ParserException : public std::exception
{
	public:
	ParserException(const std::string &message, const std::string &where);
	~ParserException() = default;

	const char *what() const noexcept;

	private:
	std::string message;
	std::string where;
};

#endif /* !PARSEREXCEPTION_HPP_ */
