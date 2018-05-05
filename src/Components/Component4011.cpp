/*
** EPITECH PROJECT, 2018
** Component4011
** File description:
** Component4011
*/

#include "Components/Component4011.hpp"

nts::Component4011::Component4011(UNUSED const std::string &value)
	: ComponentChipset("4011", 14)
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

nts::Component4011::~Component4011()
{
}

nts::Tristate nts::Component4011::compute(size_t pin)
{
	if (pin != 3 && pin != 4 && pin != 10 && pin != 11)
		return (UNDEFINED);
	switch (pin) {
		case 3 :
			return ((pins[1] == TRUE && pins[2] == TRUE) ?
				FALSE : TRUE);
		case 4 :
			return ((pins[5] == TRUE && pins[6] == TRUE) ?
				FALSE : TRUE);
		case 10 :
			return ((pins[8] == TRUE && pins[9] == TRUE) ?
				FALSE : TRUE);
		case 11 :
			return ((pins[12] == TRUE && pins[13] == TRUE) ?
				FALSE : TRUE);
	}
	return(UNDEFINED);
}