/*
** EPITECH PROJECT, 2017
** ComponentSpecial
** File description:
** ComponentSpecial
*/

#include "Components/ComponentSpecial.hpp"

ComponentSpecial::ComponentSpecial(const std::string &name, nts::Tristate pin)
	: nts::Component("", name)
{
	if (pin > 1)
		throw ComponentException(
			"Invalid component state.", "Component Special"
		);
	this->pins[1] = pin;
}

void ComponentSpecial::setValue(nts::Tristate val)
{
	this->pins[1] = val;
}