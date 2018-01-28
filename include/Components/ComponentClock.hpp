/*
** EPITECH PROJECT, 2017
** ComponentClock
** File description:
** ComponentClock
*/

#ifndef COMPONENTCLOCK_HPP_
	#define COMPONENTCLOCK_HPP_

#include "Components/ComponentInput.hpp"

class ComponentClock : public ComponentInput
{
	public:
	ComponentClock(unsigned int pin = 0);
	~ComponentClock() = default;
};

#endif /* !COMPONENTCLOCK_HPP_ */
