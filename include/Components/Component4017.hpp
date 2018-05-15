/*
** EPITECH PROJECT, 2018
** Component4017
** File description:
** Component4017
*/

#ifndef Component4017_HPP_
	#define Component4017_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4017 : public ComponentChipset
	{
		public:
		Component4017(const std::string &value);
		~Component4017();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4017_HPP_ */
