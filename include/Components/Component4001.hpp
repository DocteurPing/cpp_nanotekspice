/*
** EPITECH PROJECT, 2018
** Component4001
** File description:
** Component4001
*/

#ifndef COMPONENT4001_HPP_
	#define COMPONENT4001_HPP_

#include "Components/Component.hpp"

namespace nts
{
	class Component4001 : public nts::Component
	{
		public:
		Component4001();
		~Component4001();

		nts::Tristate compute(std::size_t pin = 1);
		void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
		void dump() const;

		private:
		const std::string model;
	};
}

#endif /* !COMPONENT4001_HPP_ */
