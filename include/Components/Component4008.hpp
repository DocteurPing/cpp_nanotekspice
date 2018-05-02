/*
** EPITECH PROJECT, 2018
** Component4008
** File description:
** Component4008
*/

#ifndef Component4008_HPP_
	#define Component4008_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4008 : public ComponentChipset
	{
		public:
		Component4008(const std::string &value);
		~Component4008();
		Tristate compute(std::size_t pin);
		Tristate gate_add(Tristate pin1, Tristate pin2, Tristate &carry);
	};
}

#endif /* !Component4008_HPP_ */
