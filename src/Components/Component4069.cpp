/*
** EPITECH PROJECT, 2018
** Component4069
** File description:
** Component4069
*/

#include "Components/Component4069.hpp"

nts::Component4069::Component4069(UNUSED const std::string &value)
	: ComponentChipset("4069", 14)
{
}

nts::Component4069::~Component4069()
{
}

nts::Tristate nts::Component4069::compute(size_t pin)
{
	nts::Tristate to_return = nts::UNDEFINED;

	if (pin != 2 && pin != 4 && pin != 6 && pin != 8 && pin
		!= 10 && pin != 12)
		return (UNDEFINED);
	switch (pin) {
		case 2 :
			this->pins[1] = links[1].second->compute(links[1].first);
			to_return = this->pins[1];
			break;
		case 4 :
			this->pins[3] = links[3].second->compute(links[3].first);
			to_return = this->pins[3];
			break;
		case 6 :
			this->pins[5] = links[5].second->compute(links[5].first);
			to_return = this->pins[5];
			break;
		case 8 :
			this->pins[9] = links[9].second->compute(links[9].first);
			to_return = this->pins[9];
			break;
		case 10 :
			this->pins[11] = links[11].second->compute(links[11].first);
			to_return = this->pins[11];
			break;
		case 12 :
			this->pins[13] = links[13].second->compute(links[13].first);
			to_return = this->pins[13];
			break;
	}
	if (to_return == UNDEFINED)
		this->pins[pin] = UNDEFINED;
	else
		this->pins[pin] = to_return == TRUE ? FALSE : TRUE;
	return(to_return);
}