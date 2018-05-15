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
	ComponentOutput(const std::string &discarded = "0");
	~ComponentOutput() = default;
	virtual nts::Tristate compute(size_t pin);
};

#endif /* !COMPONENTOUTPUT_HPP_ */
