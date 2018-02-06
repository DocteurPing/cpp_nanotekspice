/*
** EPITECH PROJECT, 2018
** IComponent
** File description:
** IComponent
*/

#ifndef ICOMPONENT_HPP_
	#define ICOMPONENT_HPP_

#include "nts.hpp"

namespace nts
{
	class IComponent
	{
		public:
		virtual ~IComponent() = default;

		virtual nts::Tristate compute(std::size_t pin = 1) = 0;
		virtual void setLink(std::size_t pin,
			nts::IComponent &other, std::size_t otherPin) = 0;
		virtual void dump() const = 0;
	};
}

#endif /* !ICOMPONENT_HPP_ */
