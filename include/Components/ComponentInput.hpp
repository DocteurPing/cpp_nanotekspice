/*
** EPITECH PROJECT, 2017
** ComponentInputy
** File description:
** ComponentInput
*/

#ifndef COMPONENTINPUT_HPP_
	#define COMPONENTINPUT_HPP_

#include "Components/Component.hpp"

class ComponentInput : public nts::Component
{
	public:
	ComponentInput(unsigned int input = 0);
	~ComponentInput();

	void setValue(nts::Tristate val);
};

#endif /* !COMPONENTINPUT_HPP_ */
