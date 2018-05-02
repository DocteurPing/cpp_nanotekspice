/*
** EPITECH PROJECT, 2018
** Component4008
** File description:
** Component4008
*/

#include "Components/Component4008.hpp"

nts::Component4008::Component4008(UNUSED const std::string &value)
	: ComponentChipset("4008", 16)
{
}

nts::Component4008::~Component4008()
{
}

nts::Tristate nts::Component4008::gate_add(nts::Tristate pin1,
			nts::Tristate pin2, nts::Tristate &carry)
{
	if ((pin1 + pin2 + carry) == 3) {
		carry = TRUE;
		return (TRUE);
	}
	else if ((pin1 + pin2 + carry) == 0) {
		carry = FALSE;
		return (FALSE);
	}
	else if ((pin1 + pin2 + carry) == 1) {
		carry = FALSE;
		return (TRUE);
	}
	else {
		carry = TRUE;
		return (FALSE);
	}
}

nts::Tristate nts::Component4008::compute(size_t pin)
{
	nts::Tristate result = UNDEFINED;
	nts::Tristate carry = FALSE;

	if (pin != 10 && pin != 11 && pin != 12 && pin != 13 && pin != 14)
		return (UNDEFINED);
	switch (pin) {
		case 10 :
			return (gate_add(pins[7], pins[6], carry));
		case 11 :
			gate_add(pins[7], pins[6], carry);
			return (gate_add(pins[5], pins[4], carry));
		case 12 :
			gate_add(pins[7], pins[6], carry);
			gate_add(pins[5], pins[4], carry);
			return (gate_add(pins[3], pins[2], carry));
		case 13 :
			gate_add(pins[7], pins[6], carry);
			gate_add(pins[5], pins[4], carry);
			gate_add(pins[3], pins[2], carry);
			return (gate_add(pins[1], pins[15], carry));
		case 14 :
			gate_add(pins[7], pins[6], carry);
			gate_add(pins[5], pins[4], carry);
			gate_add(pins[3], pins[2], carry);
			gate_add(pins[1], pins[15], carry);
			return (carry);

	}
	return (result);
}