/*
** EPITECH PROJECT, 2018
** Component4081
** File description:
** Component4081
*/

#include "Components/Component4081.hpp"

nts::Component4081::Component4081(UNUSED const std::string &value)
	: ComponentChipset("4081", 14)
{
}

nts::Component4081::~Component4081()
{
}

nts::Tristate nts::Component4081::compute(size_t pin)
{
	nts::Tristate to_return = nts::UNDEFINED;

	if (pin != 3 && pin != 4 && pin != 10 && pin != 11)
		return (UNDEFINED);
	switch (pin) {
		case 3 :
			this->pins[1] = (links[1].second->compute(links[1].first));
			this->pins[2] = (links[2].second->compute(links[2].first));
			to_return = (this->pins[1] == TRUE && this->pins[2] == TRUE) ? TRUE : FALSE;
			break;
		case 4 :
			this->pins[5] = (links[5].second->compute(links[5].first));
			this->pins[6] = (links[6].second->compute(links[6].first));
			to_return = (this->pins[5] == TRUE && this->pins[6] == TRUE) ? TRUE : FALSE;
			break;
		case 10 :
			this->pins[8] = (links[1].second->compute(links[8].first));
			this->pins[9] = (links[2].second->compute(links[9].first));
			to_return = (this->pins[8] == TRUE && this->pins[9] == TRUE) ? TRUE : FALSE;
			break;
		case 11 :
			this->pins[12] = (links[1].second->compute(links[12].first));
			this->pins[13] = (links[2].second->compute(links[13].first));
			to_return = (this->pins[12] == TRUE && this->pins[13] == TRUE) ? TRUE : FALSE;
			break;
	}
	this->pins[pin] = to_return;
	return(to_return);
}