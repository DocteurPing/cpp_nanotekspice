/*
** EPITECH PROJECT, 2017
** ComponentTrue
** File description:
** ComponentTrue
*/

#include "Components/ComponentTrue.hpp"

ComponentTrue::ComponentTrue() : ComponentSpecial("True", 1)
{
}

void ComponentTrue::setValue(nts::Tristate val)
{
	static_cast<void>(val);
}