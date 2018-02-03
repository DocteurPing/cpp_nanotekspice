/*
** EPITECH PROJECT, 2017
** ComponentClock
** File description:
** ComponentClock
*/

#include "Components/ComponentClock.hpp"

ComponentClock::ComponentClock(std::size_t pin)
	: ComponentSpecial("Clock", static_cast<nts::Tristate>(pin))
{
}
