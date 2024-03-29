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

void nts::Component::setLink(
	std::size_t pin,
	nts::IComponent &other,
	std::size_t otherPin)
{
	if (this->pins.find(pin) == this->pins.end())
		throw ComponentException("Invalid Pin", "Set Link");
	if (this->links.find(pin) != this->links.end())
		return;
	this->links[pin] = std::make_pair(otherPin, &other);
	try
	{
		other.setLink(otherPin, *this, pin);
	}
	catch (ComponentException &e)
	{
		throw ComponentException(
			"Invalid Other Component Pin", "Set Link"
		);
	}
}

void nts::Component::dump() const
{
	std::cout << "Dump of: " << this->type;
	if (!this->name.empty())
		std::cout << " (" << this->name << ")";
	std::cout << std::endl << "--------------------" << std::endl;
	for (auto &it : this->pins)
		std::cout << "Pin [" << it.first << "]:\t" << it.second <<
			std::endl;
	std::cout << "--------------------" << std::endl;
}

const std::string nts::Component::getType()
{
	return (this->type);
}

const std::string nts::Component::getName()
{
	return (this->name);
}

void nts::Component::setPin(std::string &value)
{
	nts::Tristate state;

	if (value == "1")
		state = nts::TRUE;
	else if (value == "0")
		state = nts::FALSE;
	else
		state = nts::UNDEFINED;
	this->pins[1] = state;
}