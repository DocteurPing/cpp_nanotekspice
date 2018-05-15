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
	return (pin != 1 ? nts::UNDEFINED : (links[1].second->compute(links[1].first)));
}