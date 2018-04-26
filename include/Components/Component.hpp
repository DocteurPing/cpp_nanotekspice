/*
** EPITECH PROJECT, 2018
** Component
** File description:
** Component
*/

#ifndef COMPONENT_HPP_
	#define COMPONENT_HPP_

#include "IComponent.hpp"
#include "Exceptions/ComponentException.hpp"
#include <unordered_map>

namespace nts
{
	class Component : public nts::IComponent
	{
		public:
		Component(const std::string &name, const std::string &type);
		virtual ~Component();

		nts::Tristate compute(std::size_t pin = 1);
		void setLink(std::size_t pin, nts::IComponent &other,
			std::size_t otherPin);
		void dump() const;

		protected:
		const std::string name;
		const std::string type;
		std::unordered_map<std::size_t,
			std::pair<nts::Tristate, nts::Operation> pins;
		std::unordered_map<std::size_t,
			std::pair<std::size_t, nts::IComponent *>> links;
	};
}

#endif /* !COMPONENT_HPP_ */
