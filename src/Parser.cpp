/*
** EPITECH PROJECT, 2018
** Parser
** File description:
** Parser
*/

#include "Parser.hpp"

Parser::Parser(const std::string &file)
{
	this->ifs.open(file, std::ios::in);
	if (!this->ifs.is_open())
		throw ParserException("Could not open input file.", "Input File");
}

Parser::~Parser()
{
	this->ifs.close();
}

static std::string removeUnusedSpaces(std::string line)
{
	size_t it = 0;
	size_t size = line.size();

	while (it < size)
		{
			if (isspace(line[it]) &&
				(it == 0 || (it == (size - 1)) || isspace(line[it + 1])))
			{
				line.erase(it, 1);
				size = line.size();
			}
			else
				++it;
		}
	return (line);
}

std::string Parser::getline()
{
	size_t pos;
	std::string line;

	while (std::getline(this->ifs, line))
	{
		pos = line.find("#");
		if (pos != std::string::npos)
			line = line.substr(0, pos);
		line = removeUnusedSpaces(line);
		std::replace(line.begin(), line.end(), '\t', ' ');
		if (line.size() != 0)
			break;
	}
	return (line);
}

ComponentSpecial Parser::getComposentUsed(std::string str)
{
	size_t it = 0;
	ComponentSpecial cs("fail", 0);

	for (; it <= this->listInput.size() && str != this->listInput[it].first; it++);
	if (str == this->listInput[it].first)
		return (this->listInput[it].second);
	for (it = 0; it <= this->listComponent.size() && str != this->listComponent[it].first; it++);
	if (str == this->listComponent[it].first)
		return (this->listComponent[it].second);
	return (cs);
}

std::string Parser::checkerror(std::string line)
{
	std::size_t found;
	ComponentSpecial cs("fail", 0);
	nts::ComponentManager cm;
	std::unique_ptr<nts::IComponent> c;

	if (this->section == CHIPSETS) {
		found = line.find("input");
  		if (found != std::string::npos) {
			this->listInput.push_back(std::make_pair(&line[found + 1], ComponentInput(1)));
			return ("");
		}
		found = line.find("output");
  		if (found != std::string::npos) {
			this->listOutput.push_back(std::make_pair(&line[found + 1], ComponentOutput(1)));
			return ("");
		}
		c = cm.createComponent(line.substr(0, line.find(" ")), line.substr(line.find(" ")));
		this->listOutput.push_back(std::make_pair(&line[found + 1], *dynamic_cast<ComponentOutput *>(c.get())));
	}
	if (this->section == LINKS) {
		ComponentSpecial cpnt = getComposentUsed(line.substr(0, line.find(":")));
		cpnt.setLink(std::stoul(line.substr(line.find(":"), line.find(" "))), cpnt, std::stoul(line.substr(line.find(":"))));
	}
	return (line);
}

std::string Parser::process()
{
	std::string line;

	while ((line = this->getline()) != "") {
	if (line == ".chipsets:")
		this->section = CHIPSETS;
	else if (line == ".links:")
		this->section = LINKS;
	else if (line.empty())
		this->section = UNKNOWN;
	else
		line = this->checkerror(line);
	}
	return (line);
}