/*
** EPITECH PROJECT, 2017
** ComponentSpecial
** File description:
** ComponentSpecial
*/

#include "Components/ComponentSpecial.hpp"

ComponentSpecial::ComponentSpecial(const std::string &name, unsigned int pin)
	: nts::Component("", name)
{
	if (pin > 1)
		throw ComponentException("Invalid component state.", "Component Input");
	this->pins[1] = static_cast<nts::Tristate>(pin);
}

void ComponentSpecial::setValue(nts::Tristate val)
{
	this->pins[1] = val;
}