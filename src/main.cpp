/*
** EPITECH PROJECT, 2018
** nts
** File description:
** nts
*/

#include "nts.hpp"
#include "Shell.hpp"
#include "Parser.hpp"
#include "Components/ComponentManager.hpp"
#include <memory>

nts::Shell *shell = new nts::Shell();

int main(int argc, char **argv)
{
	
	nts::ComponentManager cm;
	Parser parser(argv[1]);

	parser.process();
	shell->setOutput(parser.getOutput());
	std::unique_ptr<nts::IComponent> c = cm.createComponent("4008", "0");
	Parser pars("tmp");

	pars.process();
	std::unique_ptr<nts::IComponent> d = cm.createComponent("4017", "0");
	std::unique_ptr<nts::IComponent> e = cm.createComponent("input", "0");

	c.get()->dump();
	d.get()->dump();
	e.get()->dump();
	shell->run();
	delete(shell);
	return (0);
}
