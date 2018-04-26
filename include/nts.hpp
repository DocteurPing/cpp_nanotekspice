/*
** EPITECH PROJECT, 2018
** nts
** File description:
** nts
*/

#ifndef NTS_HPP_
	#define NTS_HPP_

#include <iostream>
#include <algorithm>
#include <functional>

#define UNUSED __attribute__((unused))

namespace nts
{
	enum Tristate {
		UNDEFINED = (-true),
		TRUE = true,
		FALSE = false
	};
}

#endif /* !NTS_HPP_ */
