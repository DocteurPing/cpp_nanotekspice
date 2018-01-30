/*
** EPITECH PROJECT, 2018
** Component
** File description:
** Component
*/

#include "Components/Component.hpp"

nts::Component::Component(const std::string &name, const std::string &type)
	: name(name), type(type)
{
}

nts::Component::~Component()
{
}

nts::Tristate nts::Component::compute(std::size_t pin)
{

}

void nts::Component::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{

}

void nts::Component::dump() const
{
	std::cout << "Dump of: " << this->type;
	if (!this->name.empty())
		std::cout << " (" << this->name << ")";
	std::cout << std::endl << "--------------------" << std::endl;
	for (auto &it : this->pins)
		std::cout << "Pin [" << it.first << "]:\t" << it.second << std::endl;
	std::cout << "--------------------" << std::endl;
}