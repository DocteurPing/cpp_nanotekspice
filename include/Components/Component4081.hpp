/*
** EPITECH PROJECT, 2018
** Component4081
** File description:
** Component4081
*/

#ifndef COMPONENT4081_HPP_
	#define COMPONENT4081_HPP_

#include "Components/Component.hpp"

namespace nts
{
	class Component4081 : public nts::Component
	{
		public:
		Component4081();
		~Component4081();

		private:
		nts::Tristate compute(std::size_t pin = 1);
		void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
		void dump() const;
	};
}

#endif /* !COMPONENT4081_HPP_ */
