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

std::string Parser::getline()
{
	size_t pos;
	std::string line;
	size_t it = 0;

	while (std::getline(this->ifs, line))
	{
		pos = line.find("#");
		if (pos != std::string::npos)
			line = line.substr(0, pos);
		size_t size = line.size();

		std::replace(line.begin(), line.end(), '\t', ' ');
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
		if (line.size() != 0)
			break;
	}
	return (line);
}

void Parser::getChipset()
{
	std::string str;

	while (((str = this->getline()) != "") && (str != ".chipsets:"));
	while ((str = this->getline()) != "" && str != ".links:");
		//std::cout << str << std::endl;
	//return (line)
}

void Parser::getLinks()
{
	std::string str;

	while ((str = this->getline()) != "")
		std::cout << str << std::endl;
	//return (line)
}