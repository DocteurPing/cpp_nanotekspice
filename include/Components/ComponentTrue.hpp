/*
** EPITECH PROJECT, 2017
** ComponentTrue
** File description:
** ComponentTrue
*/

#ifndef COMPONENTTRUE_HPP_
	#define COMPONENTTRUE_HPP_

#include "Components/ComponentSpecial.hpp"

class ComponentTrue : public ComponentSpecial
{
	public:
	ComponentTrue(const std::string &discarded = "0");
	~ComponentTrue() = default;
	virtual nts::Tristate compute(size_t pin);

	void setValue(nts::Tristate val) override;
};

#endif /* !COMPONENTTRUE_HPP_ */