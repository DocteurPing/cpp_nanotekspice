/*
** EPITECH PROJECT, 2018
** Component4801
** File description:
** Component4801
*/

#ifndef Component4801_HPP_
	#define Component4801_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4801 : public ComponentChipset
	{
		public:
		Component4801(const std::string &value);
		~Component4801();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !Component4801_HPP_ */
