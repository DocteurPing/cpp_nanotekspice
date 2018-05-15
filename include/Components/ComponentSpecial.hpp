/*
** EPITECH PROJECT, 2017
** ComponentSpecial
** File description:
** ComponentSpecial
*/

#ifndef COMPONENTSPECIAL_HPP_
	#define COMPONENTSPECIAL_HPP_

#include "Components/Component.hpp"

class ComponentSpecial : public nts::Component
{
	public:
	ComponentSpecial(const std::string &name,
		nts::Tristate value = nts::Tristate::UNDEFINED);
	virtual ~ComponentSpecial() = default;
	virtual nts::Tristate compute(size_t pin) = 0;
	virtual void setValue(nts::Tristate val);
};

#endif /* !COMPONENTSPECIAL_HPP_ */
