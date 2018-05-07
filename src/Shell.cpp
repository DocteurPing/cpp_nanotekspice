/*
** EPITECH PROJECT, 2018
** cpp_nanotekspice
** File description:
** Shell
*/

#include "Shell.hpp"

nts::Shell::Shell()
{
	cmd["exit"] = std::bind(&nts::Shell::exit, this);
	cmd["display"] = std::bind(&nts::Shell::display, this);
	cmd["simulate"] = std::bind(&nts::Shell::simulate, this);
	cmd["loop"] = std::bind(&nts::Shell::loop, this);
	cmd["dump"] = std::bind(&nts::Shell::dump, this);
}

nts::Shell::~Shell()
{
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
{}

void nts::Shell::dump()
{}

