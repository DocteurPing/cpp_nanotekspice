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
		std::cerr << "Parsing error " << e.what() << " " << e.where() << std::endl;
	}
	shell.setOutput(parser.getOutput());
	shell.run();
	return (0);
}
