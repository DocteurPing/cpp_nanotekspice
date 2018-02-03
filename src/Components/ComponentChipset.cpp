/*
** EPITECH PROJECT, 2017
** ComponentChipset
** File description:
** ComponentChipset
*/

#include "Components/ComponentChipset.hpp"

ComponentChipset::ComponentChipset(const std::string &name, std::size_t pinNo)
	: nts::Component(name, "Chipset"), pinNo(pinNo)
{
	for (size_t currPin = 1; currPin <= this->pinNo; ++currPin)
		this->pins[currPin] = nts::Tristate::UNDEFINED;
}

ComponentChipset::~ComponentChipset()
{
}
