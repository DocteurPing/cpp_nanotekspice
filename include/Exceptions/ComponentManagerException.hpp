/*
** EPITECH PROJECT, 2018
** ComponentManagerException
** File description:
** ComponentManagerException
*/

#ifndef ComponentManagerException_HPP_
	#define ComponentManagerException_HPP_

#include "Exceptions/NtsException.hpp"

class ComponentManagerException : public NtsException
{
	public:
	ComponentManagerException(const std::string &what, const std::string &where);
	~ComponentManagerException() = default;
};

#endif /* !PARSEREXCEPTION_HPP_ */
