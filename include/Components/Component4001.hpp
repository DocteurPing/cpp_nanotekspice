/*
** EPITECH PROJECT, 2018
** Component4001
** File description:
** Component4001
*/

#ifndef COMPONENT4001_HPP_
	#define COMPONENT4001_HPP_

#include "Components/ComponentChipset.hpp"

namespace nts
{
	class Component4001 : public ComponentChipset
	{
		public:
		Component4001(const std::string &value);
		~Component4001();
		virtual nts::Tristate compute(size_t pin);
	};
}

#endif /* !COMPONENT4001_HPP_ */
