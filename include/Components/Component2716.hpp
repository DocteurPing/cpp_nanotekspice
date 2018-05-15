/*
** EPITECH PROJECT, 2018
** Component2716
** File description:
** Component2716
*/

#ifndef Component2716_HPP_
	#define Component2716_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component2716 : public ComponentChipset
	{
		public:
		Component2716(const std::string &value);
		~Component2716();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component2716_HPP_ */
