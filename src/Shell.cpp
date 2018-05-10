/*
** EPITECH PROJECT, 2018
** cpp_nanotekspice
** File description:
** Shell
*/

#include "Shell.hpp"

extern nts::Shell *shell;

nts::Shell::Shell()
{
	isexit = false;
	isloop = true;
	cmd["exit"] = std::bind(&nts::Shell::exit, this);
	cmd["display"] = std::bind(&nts::Shell::display, this);
	cmd["simulate"] = std::bind(&nts::Shell::simulate, this);
	cmd["loop"] = std::bind(&nts::Shell::loop, this);
	cmd["dump"] = std::bind(&nts::Shell::dump, this);
}

nts::Shell::~Shell()
{
}

bool nts::Shell::getisloop()
{
	return (isloop);
}

void nts::Shell::setisloop(bool nisloop)
{
	isloop = nisloop;
}

void nts::Shell::exit(void)
{
	isexit = true;
}

void nts::Shell::display()
{}

void nts::Shell::simulate()
{}

void nts::Shell::loop()
{
	while (isloop)
	{
		usleep(500);
	}
	isloop = true;
}

void nts::Shell::dump()
{}

void stoploop(int nbr)
{
	(void)nbr;
	if (shell->getisloop() == true)
		shell->setisloop(false);
}

void nts::Shell::run()
{
	signal(SIGINT, stoploop);
	std::string buffer;
	std::cout << "> ";
	while (!isexit && std::getline(std::cin, buffer)) {
		if (buffer != "exit" && buffer != "display" &&
		buffer != "simulate" && buffer != "loop" && buffer != "dump")
			std::cout << "\"" << buffer << "\" : unknown command"
			<< std::endl;
		else
			cmd[buffer]();
		std::cout << "> ";
	}
}