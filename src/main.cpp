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
	Parser parser;
	int ret = 84;

	(void)argc;
	try {
		parser.setFile(argv[1]);
		parser.process();
		shell.setOutput(parser.getOutput());
		shell.run();
		ret = 0;
	} catch (ParserException &e) {
		std::cerr << "Parsing error " << e.what() << " " << e.where() << std::endl;
	} catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << " " << std::endl;
	}
	return (0);
}
