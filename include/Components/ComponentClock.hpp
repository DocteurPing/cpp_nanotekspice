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
	ComponentClock(unsigned int pin = 0);
	~ComponentClock() = default;
};

#endif /* !COMPONENTCLOCK_HPP_ */
