/*
** EPITECH PROJECT, 2018
** Component4017
** File description:
** Component4017
*/

#include "Components/Component4017.hpp"

nts::Component4017::Component4017(UNUSED const std::string &value)
	: ComponentChipset("4017", 24)
{
}

nts::Component4017::~Component4017()
{
}

nts::Tristate nts::Component4017::compute(size_t pin)
{
	return (nts::UNDEFINED);
}