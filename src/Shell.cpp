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
	ssize_t it;
	for (unsigned int i = 0; i < (*this->listComponent).size(); i++) {
		if ((*this->listComponent)[i].second.get()->getType() == "Output") {
			if ((it = findComponentOutput((*this->listComponent)[i].first)) == -1)
				this->output.push_back(std::make_pair((*this->listComponent)[i].first, (*this->listComponent)[i].second.get()->compute(1)));
			else
				this->output[it].second = (*this->listComponent)[i].second.get()->compute(1);
		}
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

static std::vector<std::string> split(const std::string &s, char delim)
{
    std::vector<std::string> result;
    std::istringstream iss(s);

    for (std::string token; std::getline(iss, token, delim); )
        result.push_back(std::move(token));
    return result;
}

ssize_t nts::Shell::findComponent(
	const std::string &name)
{
	ssize_t ret = -1;

	for (size_t it = 0; it < (*this->listComponent).size(); ++it)
	{
		if ((*this->listComponent)[it].first == name)
		{
			ret = it;
			break;
		}
	}
	return (ret);
}

ssize_t nts::Shell::findComponentOutput(
	const std::string &name)
{
	ssize_t ret = -1;

	for (size_t it = 0; it < (this->output).size(); ++it)
	{
		if ((this->output)[it].first == name)
		{
			ret = it;
			break;
		}
	}
	return (ret);
}

void nts::Shell::asign(std::string buffer)
{
	std::vector<std::string> liste;
	ssize_t tmp;

	liste = split(buffer, '=');
	if (liste.size() < 2 || liste[0].length() == 0) {
		std::cout << "Unknown Command" << std::endl;
		return ;
	} else {
		tmp = findComponent(liste[0]);
		if (tmp == -1) {
			std::cout << "Component not found" << std::endl;
			return ;
		}
		(*this->listComponent)[tmp].second.get()->setPin(liste[1]);
		
	}
}

void nts::Shell::run()
{
	signal(SIGINT, stoploop);
	std::string buffer;
	std::cout << "> ";
	while (!isexit && std::getline(std::cin, buffer)) {
		if (buffer != "exit" && buffer != "display" &&
		buffer != "simulate" && buffer != "loop" && buffer != "dump")
			asign(buffer);
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