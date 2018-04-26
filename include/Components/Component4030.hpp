/*
** EPITECH PROJECT, 2018
** Component4030
** File description:
** Component4030
*/

#ifndef Component4030_HPP_
	#define Component4030_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4030 : public ComponentChipset
	{
		public:
		Component4030(const std::string &value);
		~Component4030();
		nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4030_HPP_ */
