/*
** EPITECH PROJECT, 2018
** Component
** File description:
** Component
*/

#include "Components/Component.hpp"

nts::Component::Component(const std::string &model, const std::string &value)
	: model(model), value(value)
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
	std::cout << "My name is: " << this->model << std::endl;
}