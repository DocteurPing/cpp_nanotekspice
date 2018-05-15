/*
** EPITECH PROJECT, 2018
** Component4013
** File description:
** Component4013
*/

#ifndef Component4013_HPP_
	#define Component4013_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4013 : public ComponentChipset
	{
		public:
		Component4013(const std::string &value);
		~Component4013();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4013_HPP_ */
