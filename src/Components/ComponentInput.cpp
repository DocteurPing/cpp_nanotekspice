/*
** EPITECH PROJECT, 2017
** ComponentInput
** File description:
** ComponentInput
*/

#include "Components/ComponentInput.hpp"

ComponentInput::ComponentInput(std::size_t pin)
	: ComponentSpecial("Input", static_cast<nts::Tristate>(pin))
{

}
