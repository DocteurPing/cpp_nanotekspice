/*
** EPITECH PROJECT, 2018
** cpp_nanotekspice
** File description:
** Shell
*/

#include "Shell.hpp"

extern nts::Shell shell;

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
{
	for (unsigned int i = 0; i < (this->output).size(); i++) {
		std::cout << this->output[i].first << "=" <<
			this->output[i].second << std::endl;
	}
}

void nts::Shell::simulate()
{
	for (unsigned int i = 0; i < (*this->listComponent).size(); i++) {
		if ((*this->listComponent)[i].second.get()->getType() == "Output")
			this->output.push_back(std::make_pair((*this->listComponent)[i].first, (*this->listComponent)[i].second.get()->compute(1)));
	}
}

void nts::Shell::loop()
{
	while (isloop)
	{
		usleep(500);
	}
	isloop = true;
}

void nts::Shell::dump()
{
	for (unsigned int i = 0; i < (*this->listComponent).size(); i++) {
		(*this->listComponent)[i].second.get()->dump();
	}
}

void stoploop(int nbr)
{
	(void)nbr;
	if (shell.getisloop() == true)
		shell.setisloop(false);
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

void nts::Shell::setOutput(std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *listcomponent)
{
	this->listComponent = listcomponent;
}

std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *nts::Shell::getOutput()
{
	return(this->listComponent);
}