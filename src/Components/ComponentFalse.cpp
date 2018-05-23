/*
** EPITECH PROJECT, 2017
** ComponentFalse
** File description:
** ComponentFalse
*/

#include "Components/ComponentFalse.hpp"

ComponentFalse::ComponentFalse(const std::string &discarded)
	: ComponentSpecial("False", nts::Tristate::FALSE)
{
	static_cast<void>(discarded);
}

void ComponentFalse::setValue(nts::Tristate val)
{
	static_cast<void>(val);
}

nts::Tristate ComponentFalse::compute(size_t pin)
{
	return (nts::FALSE);
}