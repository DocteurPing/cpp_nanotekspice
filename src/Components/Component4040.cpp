/*
** EPITECH PROJECT, 2018
** Component4040
** File description:
** Component4040
*/

#include "Components/Component4040.hpp"

nts::Component4040::Component4040(UNUSED const std::string &value)
	: ComponentChipset("4040", 16)
{
}

nts::Component4040::~Component4040()
{
}

nts::Tristate nts::Component4040::compute(size_t pin)
{
	return (nts::UNDEFINED);
}