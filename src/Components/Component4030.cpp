/*
** EPITECH PROJECT, 2018
** Component4030
** File description:
** Component4030
*/

#include "Components/Component4030.hpp"

nts::Component4030::Component4030(UNUSED const std::string &value)
	: ComponentChipset("4030", 14)
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

nts::Component4030::~Component4030()
{
}

nts::Tristate nts::Component4030::compute(size_t pin)
{
	if (pin != 3 && pin != 4 && pin != 10 && pin != 11)
		return (UNDEFINED);
	switch (pin) {
		case 3 :
			return (pins[1] == pins[2] ? FALSE : TRUE);
		case 4 :
			return (pins[5] == pins[6] ? FALSE : TRUE);
		case 10 :
			return (pins[8] == pins[9] ? FALSE : TRUE);
		case 11 :
			return (pins[12] == pins[13] ? FALSE : TRUE);
	}
	return(UNDEFINED);
}