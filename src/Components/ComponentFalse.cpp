/*
** EPITECH PROJECT, 2017
** ComponentFalse
** File description:
** ComponentFalse
*/

#include "Components/ComponentFalse.hpp"

ComponentFalse::ComponentFalse() : ComponentSpecial("False", 0)
{
}

void ComponentFalse::setValue(nts::Tristate val)
{
	static_cast<void>(val);
}