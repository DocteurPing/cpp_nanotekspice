/*
** EPITECH PROJECT, 2017
** ComponentInput
** File description:
** ComponentInput
*/

#include "Components/ComponentInput.hpp"

ComponentInput::ComponentInput(const std::string &pin)
	: ComponentSpecial("Input", static_cast<nts::Tristate>(std::stoul(pin)))
{
	nts::Tristate state;

	if (pin == "1")
		state = nts::TRUE;
	else if (pin == "0")
		state = nts::FALSE;
	else
		state = nts::UNDEFINED;
	pins = {
		{1, state}
	};
}

nts::Tristate ComponentInput::compute(size_t pin)
{
	return (pin != 1 ? nts::UNDEFINED : pins[1]);
}