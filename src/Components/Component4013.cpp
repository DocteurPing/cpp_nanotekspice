/*
** EPITECH PROJECT, 2018
** Component4013
** File description:
** Component4013
*/

#include "Components/Component4013.hpp"

nts::Component4013::Component4013(UNUSED const std::string &value)
	: ComponentChipset("4013", 14)
{
}

nts::Component4013::~Component4013()
{
}

nts::Tristate nts::Component4013::compute(size_t pin)
{
	return (nts::UNDEFINED);
}