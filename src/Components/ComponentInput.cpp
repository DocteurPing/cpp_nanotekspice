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

}
