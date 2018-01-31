/*
** EPITECH PROJECT, 2017
** ComponentOutput
** File description:
** ComponentOutput
*/

#ifndef COMPONENTOUTPUT_HPP_
	#define COMPONENTOUTPUT_HPP_

#include "Components/ComponentSpecial.hpp"

class ComponentOutput : public ComponentSpecial
{
	public:
	ComponentOutput(unsigned int pin = 0);
	virtual ~ComponentOutput() = default;
};

#endif /* !COMPONENTOUTPUT_HPP_ */
