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
		ComponentInput(const std::string &pin = "0");
		virtual ~ComponentInput() = default;
		nts::Tristate Compute(size_t pin);
};

#endif /* !COMPONENTINPUT_HPP_ */
