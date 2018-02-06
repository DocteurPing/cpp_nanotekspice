/*
** EPITECH PROJECT, 2018
** nts
** File description:
** nts
*/

#include "nts.hpp"
#include "Parser.hpp"
#include <memory>
#include "Components/ComponentManager.hpp"

int main(int argc, char **argv)
{
	nts::ComponentManager cm;
	std::unique_ptr<nts::IComponent> c = cm.createComponent("4008", "0");
	Parser pars("tmp");

	pars.process();
	std::unique_ptr<nts::IComponent> d = cm.createComponent("4017", "0");
	std::unique_ptr<nts::IComponent> e = cm.createComponent("input", "0");

	c.get()->dump();
	d.get()->dump();
	e.get()->dump();
	return (0);
}
