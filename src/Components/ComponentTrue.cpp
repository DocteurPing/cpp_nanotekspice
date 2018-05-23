/*
** EPITECH PROJECT, 2017
** ComponentTrue
** File description:
** ComponentTrue
*/

#include "Components/ComponentTrue.hpp"

ComponentTrue::ComponentTrue(const std::string &discarded)
	: ComponentSpecial("True", nts::Tristate::TRUE)
{
	static_cast<void>(discarded);
}

void ComponentTrue::setValue(nts::Tristate val)
{
	static_cast<void>(val);
}

nts::Tristate ComponentTrue::compute(size_t pin)
{
	return (nts::TRUE);
}