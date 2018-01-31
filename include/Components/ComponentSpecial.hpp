/*
** EPITECH PROJECT, 2017
** ComponentSpecial
** File description:
** ComponentSpecial
*/

#ifndef COMPONENTSPECIAL_HPP_
	#define COMPONENTSPECIAL_HPP_

#include "Components/Component.hpp"

class ComponentSpecial : public nts::Component
{
	public:
	ComponentSpecial(const std::string &name, unsigned int pin = 0);
	virtual ~ComponentSpecial() = default;

	virtual void setValue(nts::Tristate val);
};

#endif /* !COMPONENTSPECIAL_HPP_ */
