/*
** EPITECH PROJECT, 2017
** Compute
** File description:
** Compute
*/

#include "Compute.hpp"

nts::Tristate nts::Compute::norGate(nts::Tristate a, nts::Tristate b)
{
	if (a == nts::Tristate::UNDEFINED || b == nts::Tristate::UNDEFINED)
		return (nts::Tristate::UNDEFINED);
	return (static_cast<nts::Tristate>(!(a | b)));
}

nts::Tristate nts::Compute::nandGate(nts::Tristate a, nts::Tristate b)
{
	if (a == nts::Tristate::UNDEFINED || b == nts::Tristate::UNDEFINED)
		return (nts::Tristate::UNDEFINED);
	return (static_cast<nts::Tristate>(!(a & b)));
}

nts::Tristate nts::Compute::xorGate(nts::Tristate a, nts::Tristate b)
{
	if (a == nts::Tristate::UNDEFINED || b == nts::Tristate::UNDEFINED)
		return (nts::Tristate::UNDEFINED);
	return (static_cast<nts::Tristate>(a ^ b));
}

nts::Tristate nts::Compute::invertGate(nts::Tristate a)
{
	if (a == nts::Tristate::UNDEFINED)
		return (nts::Tristate::UNDEFINED);
	return (static_cast<nts::Tristate>(!a));
}

nts::Tristate nts::Compute::orGate(nts::Tristate a, nts::Tristate b)
{
	if (a == nts::Tristate::UNDEFINED || b == nts::Tristate::UNDEFINED)
		return (nts::Tristate::UNDEFINED);
	return (static_cast<nts::Tristate>(a | b));
}

nts::Tristate nts::Compute::andGate(nts::Tristate a, nts::Tristate b)
{
	if (a == nts::Tristate::UNDEFINED || b == nts::Tristate::UNDEFINED)
		return (nts::Tristate::UNDEFINED);
	return (static_cast<nts::Tristate>(a & b));
}