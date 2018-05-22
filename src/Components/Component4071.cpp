/*
** EPITECH PROJECT, 2018
** Component4071
** File description:
** Component4071
*/

#include "Components/Component4071.hpp"

nts::Component4071::Component4071(UNUSED const std::string &value)
	: ComponentChipset("4071", 14)
{
}

nts::Component4071::~Component4071()
{
}

nts::Tristate nts::Component4071::compute(size_t pin)
{
	if (pin != 3 && pin != 4 && pin != 10 && pin != 11)
		return (UNDEFINED);
	switch (pin) {
		case 3 :
			return (((links[1].second->compute(links[1].first)) == TRUE || (links[2].second->compute(links[2].first)) == TRUE) ? TRUE : FALSE);
		case 4 :
			return (((links[5].second->compute(links[5].first)) == TRUE || (links[6].second->compute(links[6].first)) == TRUE) ? TRUE : FALSE);
		case 10 :
			return (((links[8].second->compute(links[8].first)) == TRUE || (links[9].second->compute(links[9].first)) == TRUE) ? TRUE : FALSE);
		case 11 :
			return (((links[12].second->compute(links[12].first)) == TRUE || (links[13].second->compute(links[13].first)) == TRUE) ? TRUE : FALSE);
	}
	return(UNDEFINED);
}