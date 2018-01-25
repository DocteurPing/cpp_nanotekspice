/*
** EPITECH PROJECT, 2018
** ComponentManagerException
** File description:
** ComponentManagerException
*/

#ifndef ComponentManagerException_HPP_
	#define ComponentManagerException_HPP_

#include <string>
#include <exception>

class ComponentManagerException : public std::exception
{
	public:
	ComponentManagerException(const std::string &message, const std::string &where);
	~ComponentManagerException() = default;

	const char *what() const noexcept;

	private:
	std::string message;
	std::string where;
};

#endif /* !PARSEREXCEPTION_HPP_ */
