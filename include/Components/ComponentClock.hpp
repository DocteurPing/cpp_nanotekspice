/*
** EPITECH PROJECT, 2017
** ComponentClock
** File description:
** ComponentClock
*/

#ifndef COMPONENTCLOCK_HPP_
	#define COMPONENTCLOCK_HPP_

#include "Components/ComponentSpecial.hpp"

class ComponentClock : public ComponentSpecial
{
	public:
	ComponentClock(const std::string &pin = "0");
	~ComponentClock() = default;
	virtual nts::Tristate compute(size_t pin);
};

#endif /* !COMPONENTCLOCK_HPP_ */
