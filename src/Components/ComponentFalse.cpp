/*
** EPITECH PROJECT, 2017
** ComponentFalse
** File description:
** ComponentFalse
*/

#include "Components/ComponentFalse.hpp"

ComponentFalse::ComponentFalse()
	: ComponentSpecial("False", nts::Tristate::FALSE)
{
}

void ComponentFalse::setValue(nts::Tristate val)
{
	static_cast<void>(val);
}