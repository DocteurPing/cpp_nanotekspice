/*
** EPITECH PROJECT, 2018
** Component4094
** File description:
** Component4094
*/

#ifndef Component4094_HPP_
	#define Component4094_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4094 : public ComponentChipset
	{
		public:
		Component4094(const std::string &value);
		~Component4094();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4094_HPP_ */
