/*
** EPITECH PROJECT, 2018
** Component
** File description:
** Component
*/

#ifndef COMPONENT_HPP_
	#define COMPONENT_HPP_

#include "IComponent.hpp"
#include <unordered_map>

namespace nts
{
	class Component : public nts::IComponent
	{
		public:
		Component(const std::string &model, const std::string &value);
		virtual ~Component();

		nts::Tristate compute(std::size_t pin = 1);
		void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
		void dump() const;

		protected:
		const std::string model;
		std::string value;
	};
}

#endif /* !COMPONENT_HPP_ */
