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
	std::unique_ptr<nts::IComponent> c = cm.createComponent("4008", "0");
	std::unique_ptr<nts::IComponent> d = cm.createComponent("4017", "0");

	c.get()->setLink(1, *d.get(), 1);
	return (0);
}
