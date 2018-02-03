/*
** EPITECH PROJECT, 2017
** Compute
** File description:
** Compute
*/

#ifndef COMPUTE_HPP_
	#define COMPUTE_HPP_

#include "IComponent.hpp"

namespace nts
{
	namespace Compute
	{
		nts::Tristate norGate(nts::Tristate a, nts::Tristate b);
		nts::Tristate nandGate(nts::Tristate a, nts::Tristate b);
		nts::Tristate xorGate(nts::Tristate a, nts::Tristate b);
		nts::Tristate invertGate(nts::Tristate a);
		nts::Tristate orGate(nts::Tristate a, nts::Tristate b);
		nts::Tristate andGate(nts::Tristate a, nts::Tristate b);
	}
}

#endif /* !COMPUTE_HPP_ */
