/*
** EPITECH PROJECT, 2018
** Component4040
** File description:
** Component4040
*/

#ifndef Component4040_HPP_
	#define Component4040_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4040 : public ComponentChipset
	{
		public:
		Component4040(const std::string &value);
		~Component4040();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4040_HPP_ */
