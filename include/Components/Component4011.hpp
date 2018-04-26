/*
** EPITECH PROJECT, 2018
** Component4011
** File description:
** Component4011
*/

#ifndef Component4011_HPP_
	#define Component4011_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4011 : public ComponentChipset
	{
		public:
		Component4011(const std::string &value);
		~Component4011();
		nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4011_HPP_ */
