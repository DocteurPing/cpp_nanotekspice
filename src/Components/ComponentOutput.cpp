/*
** EPITECH PROJECT, 2017
** ComponentOutput
** File description:
** ComponentOutput
*/

#include "Components/ComponentOutput.hpp"

ComponentOutput::ComponentOutput(const std::string &discarded)
	: ComponentSpecial("Output")
{
	static_cast<void>(discarded);
}

nts::Tristate ComponentOutput::compute(size_t pin)
{
	if (pin != 1)
		return (nts:: UNDEFINED);
	this->pins[1] = links[1].second->compute(links[1].first);
	return (this->pins[1]);
}