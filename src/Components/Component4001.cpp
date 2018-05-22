/*
** EPITECH PROJECT, 2018
** Component4001
** File description:
** Component4001
*/

#include "Components/Component4001.hpp"

nts::Component4001::Component4001(UNUSED const std::string &value)
	: ComponentChipset("4001", 14)
{
}

nts::Component4001::~Component4001()
{
}

nts::Tristate nts::Component4001::compute(size_t pin)
{
	nts::Tristate to_return = nts::UNDEFINED;

	if (pin != 3 && pin != 4 && pin != 10 && pin != 11)
		return (UNDEFINED);
	switch (pin) {
		case 3 :
			this->pins[1] = links[1].second->compute(links[1].first);
			this->pins[2] = links[2].second->compute(links[2].first);
			if (this->pins[1] == UNDEFINED || this->pins[2] == UNDEFINED)
				to_return = UNDEFINED;
			else
				to_return = (this->pins[1] == TRUE || this->pins[2] == TRUE) ? FALSE : TRUE;
			break;
		case 4 :
			this->pins[5] = links[5].second->compute(links[5].first);
			this->pins[6] = links[6].second->compute(links[6].first);
			if (this->pins[5] == UNDEFINED || this->pins[6] == UNDEFINED)
				to_return = UNDEFINED;
			else
				to_return = (this->pins[5] == TRUE || this->pins[6] == TRUE) ? FALSE : TRUE;
			break;
		case 10 :
			this->pins[8] = links[8].second->compute(links[8].first);
			this->pins[9] = links[9].second->compute(links[9].first);
			if (this->pins[8] == UNDEFINED || this->pins[9] == UNDEFINED)
				to_return = UNDEFINED;
			else
				to_return = (this->pins[8] == TRUE || this->pins[9] == TRUE) ? FALSE : TRUE;
			break;
		case 11 :
			this->pins[11] = links[11].second->compute(links[11].first);
			this->pins[12] = links[12].second->compute(links[12].first);
			if (this->pins[11] == UNDEFINED || this->pins[12] == UNDEFINED)
				to_return = UNDEFINED;
			else
				to_return = (this->pins[11] == TRUE || this->pins[12] == TRUE) ? FALSE : TRUE;
			break;
	}
	this->pins[pin] = to_return;
	return(to_return);
}