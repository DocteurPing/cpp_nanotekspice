/*
** EPITECH PROJECT, 2017
** ComponentInputy
** File description:
** ComponentInput
*/

#ifndef COMPONENTINPUT_HPP_
	#define COMPONENTINPUT_HPP_

#include "Components/ComponentSpecial.hpp"

class ComponentInput : public ComponentSpecial
{
	public:
	ComponentInput(std::size_t input = 0);
	virtual ~ComponentInput() = default;
};

#endif /* !COMPONENTINPUT_HPP_ */
