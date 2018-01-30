/*
** EPITECH PROJECT, 2017
** ComponentException
** File description:
** ComponentException
*/

#ifndef COMPONENTEXCEPTION_HPP_
	#define COMPONENTEXCEPTION_HPP_

#include "Exceptions/NtsException.hpp"

class ComponentException : public NtsException
{
	public:
	ComponentException(const std::string &what, const std::string &where);
	~ComponentException() = default;
};

#endif /* !COMPONENTEXCEPTION_HPP_ */
