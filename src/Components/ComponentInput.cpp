/*
** EPITECH PROJECT, 2017
** ComponentInput
** File description:
** ComponentInput
*/

#include "Components/ComponentInput.hpp"

ComponentInput::ComponentInput(unsigned int input)
	: Component("", "Input")
{
	if (input > 1)
		throw ComponentException("Invalid component state.", "Component Input");
	this->pins[1] = static_cast<nts::Tristate>(input);
}

ComponentInput::~ComponentInput()
{
}
