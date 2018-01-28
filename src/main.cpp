/*
** EPITECH PROJECT, 2018
** nts
** File description:
** nts
*/

#include "nts.hpp"
#include <memory>
#include "Components/ComponentManager.hpp"

int main()
{
	nts::ComponentManager cm;
	std::unique_ptr<nts::IComponent> c = cm.createComponent("input", "0");

	c.get()->dump();
	return (0);
}
