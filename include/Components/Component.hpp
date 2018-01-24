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
		Component(const std::string &model);
		virtual ~Component();

		protected:
		const std::string model;

		private:
		virtual nts::Tristate compute(std::size_t pin = 1) = 0;
		virtual void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) = 0;
		virtual void dump() const = 0;
	};
}

#endif /* !COMPONENT_HPP_ */
