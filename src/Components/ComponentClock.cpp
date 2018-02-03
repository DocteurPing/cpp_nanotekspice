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
