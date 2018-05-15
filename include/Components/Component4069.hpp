/*
** EPITECH PROJECT, 2018
** Component4069
** File description:
** Component4069
*/

#ifndef Component4069_HPP_
	#define Component4069_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4069 : public ComponentChipset
	{
		public:
		Component4069(const std::string &value);
		~Component4069();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4069_HPP_ */
