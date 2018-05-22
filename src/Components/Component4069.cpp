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
	if (pin != 2 && pin != 4 && pin != 6 && pin != 8 && pin
		!= 10 && pin != 12)
		return (UNDEFINED);
	switch (pin) {
		case 2 :
			return ((links[1].second->compute(links[1].first)) == TRUE ? FALSE : TRUE);
		case 4 :
			return ((links[3].second->compute(links[3].first)) == TRUE ? FALSE : TRUE);
		case 6 :
			return ((links[5].second->compute(links[5].first)) == TRUE ? FALSE : TRUE);
		case 8 :
			return ((links[9].second->compute(links[9].first)) == TRUE ? FALSE : TRUE);
		case 10 :
			return ((links[11].second->compute(links[11].first)) == TRUE ? FALSE : TRUE);
		case 12 :
			return ((links[13].second->compute(links[13].first)) == TRUE ? FALSE : TRUE);
	}
	return(UNDEFINED);
}