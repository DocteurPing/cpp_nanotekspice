/*
** EPITECH PROJECT, 2017
** ComponentChipset
** File description:
** ComponentChipset
*/

#ifndef COMPONENTCHIPSET_HPP_
	#define COMPONENTCHIPSET_HPP_

#include "Components/Component.hpp"

class ComponentChipset : public nts::Component
{
	public:
	ComponentChipset(const std::string &model, std::size_t pinNo);
	~ComponentChipset();
	virtual nts::Tristate compute(size_t pin) = 0;

	private:
	const std::size_t pinNo;
};

#endif /* !COMPONENTCHIPSET_HPP_ */
