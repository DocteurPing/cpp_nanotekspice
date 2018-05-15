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

nts::Shell shell = nts::Shell();

int main(int argc, char **argv)
{
	
	nts::ComponentManager cm;
	Parser parser(argv[1]);

	(void)argc;
	try {
		parser.process();
	} catch (ParserException &e) {
		throw e;
	}
	shell.setOutput(parser.getOutput());
	std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *output = shell.getOutput();
	shell.run();
	return (0);
}
