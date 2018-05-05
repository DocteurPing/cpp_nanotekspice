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
	pins = {
		{1, UNDEFINED},
		{2, UNDEFINED},
		{3, UNDEFINED},
		{4, UNDEFINED},
		{5, UNDEFINED},
		{6, UNDEFINED},
		{7, UNDEFINED},
		{8, UNDEFINED},
		{9, UNDEFINED},
		{10, UNDEFINED},
		{11, UNDEFINED},
		{12, UNDEFINED},
		{13, UNDEFINED},
		{14, UNDEFINED}
	};
}

nts::Component4069::~Component4069()
{
}

nts::Tristate nts::Component4069::compute(size_t pin)
{
	if (pin != 2 && pin != 4 && pin != 6 && pin != 8 && pin
		!= 10 && pin != 12)
		return (UNDEFINED);
	switch (pin) {
		case 2 :
			return (pins[1] == TRUE ? FALSE : TRUE);
		case 4 :
			return (pins[3] == TRUE ? FALSE : TRUE);
		case 6 :
			return (pins[5] == TRUE ? FALSE : TRUE);
		case 8 :
			return (pins[9] == TRUE ? FALSE : TRUE);
		case 10 :
			return (pins[11] == TRUE ? FALSE : TRUE);
		case 12 :
			return (pins[13] == TRUE ? FALSE : TRUE);
	}
	return(UNDEFINED);
}