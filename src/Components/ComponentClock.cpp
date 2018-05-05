/*
** EPITECH PROJECT, 2017
** ComponentClock
** File description:
** ComponentClock
*/

#include "Components/ComponentClock.hpp"

ComponentClock::ComponentClock(const std::string &pin)
	: ComponentSpecial("Clock", static_cast<nts::Tristate>(std::stoul(pin)))
{
}

nts::Tristate ComponentClock::Compute(size_t pin)
{
	if (pin != 1)
		return (nts::UNDEFINED);
	pins[1] = pins[1] ? nts::FALSE : nts::TRUE;
	return (pin != 1 ? nts::UNDEFINED : pins[1]);
}