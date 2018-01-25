/*
** EPITECH PROJECT, 2017
** NtsException
** File description:
** NtsException
*/

#include <string>
#include <exception>

class NtsException : public std::exception
{
	public:
	NtsException(const std::string &message, const std::string &where);
	~NtsException() = default;

	virtual const char *what() const noexcept;
	virtual const char *where() const noexcept;

	protected:
	std::string _what;
	std::string _where;
};