/*
** EPITECH PROJECT, 2017
** ComponentFalse
** File description:
** ComponentFalse
*/

#ifndef COMPONENTFALSE_HPP_
	#define COMPONENTFALSE_HPP_

#include "Components/ComponentSpecial.hpp"

class ComponentFalse : public ComponentSpecial
{
	public:
	ComponentFalse(const std::string &discarded = "0");
	~ComponentFalse() = default;

	void setValue(nts::Tristate val) override;
};

#endif /* !COMPONENTFALSE_HPP_ */
