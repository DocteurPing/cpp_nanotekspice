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
			return ((links[1].second->compute(links[1].first)) == (links[2].second->compute(links[2].first)) ? FALSE : TRUE);
		case 4 :
			return ((links[5].second->compute(links[5].first)) == (links[6].second->compute(links[6].first)) ? FALSE : TRUE);
		case 10 :
			return ((links[8].second->compute(links[8].first)) == (links[9].second->compute(links[9].first)) ? FALSE : TRUE);
		case 11 :
			return ((links[12].second->compute(links[12].first)) == (links[13].second->compute(links[13].first)) ? FALSE : TRUE);
	}
	return(UNDEFINED);
}