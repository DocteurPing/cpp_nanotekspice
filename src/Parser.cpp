/*
** EPITECH PROJECT, 2018
** Parser
** File description:
** Parser
*/

#include "Parser.hpp"

Parser::Parser()
{

}

Parser::Parser(const std::string &file)
{
	try
	{
		this->setFile(file);
	}
	catch (ParserException &e)
	{
		throw e;
	}
}

Parser::~Parser()
{
	this->ifs.close();
}

void Parser::setFile(const std::string &file)
{
	this->ifs.open(file, std::ios::in);
	if (!this->ifs.is_open())
		throw ParserException("Could not open file.", "Input File");
}

void Parser::process()
{
	std::string line;

	for (line = this->getline(); line != ""; line = this->getline())
	{
		if (this->section == UNKNOWN && line != ".chipsets:" &&
			line !=  ".links:")
			throw ParserException
				("Section needs to be issued.", "Input FIle");
		try
		{
			this->handleInput(line);
		}
		catch (ParserException &e)
		{
			throw e;
		}
	}
}

static inline std::string removeUnusedSpaces(std::string line)
{
	size_t it = 0;
	size_t size = line.size();

	while (it < size)
	{
		if (isspace(line[it]) && (it == 0 || (it == (size - 1)) ||
			isspace(line[it + 1])))
		{
			line.erase(it, 1);
			size = line.size();
		}
		else
			++it;
	}
	return (line);
}

std::string Parser::getline() noexcept
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

void Parser::handleInput(const std::string &line)
{
	if ((this->section == UNKNOWN && line == ".links:") ||
		(this->section == LINKS && line == ".chipsets:"))
		throw ParserException("Invalid section.", "Input file");
	else if (line == ".chipsets:" || line == ".links:")
	{
		if (line == ".chipsets:")
			this->section = CHIPSETS;
		if (line == ".links:")
			this->section = LINKS;
	}
	else
	{
		try {
		if (this->section == CHIPSETS)
			this->handleChipset(line);
		else if (this->section == LINKS)
			this->handleLink(line);
		}
		catch (ParserException &e)
		{
			throw e;
		}
	}

}

static std::vector<std::string> split(const std::string &s, char delim)
{
    std::vector<std::string> result;
    std::istringstream iss(s);

    for (std::string token; std::getline(iss, token, delim); )
        result.push_back(std::move(token));
    return result;
}

void Parser::handleChipset(const std::string &line)
{
	std::vector<std::string> list = split(line, ' ');

	if (!(list.size() >= 2 && list[1].length() > 0))
		throw ParserException("Invalid chipset syntax.", "Input File");
	try {
		this->findComponent(list[1]);
		throw ParserException("Element Already Exists", "Input File");
	}
	catch (ParserException &e) {
		try {
			this->listComponent.push_back(
				std::make_pair(
				list[1], this->cm.createComponent(list[0], "0")
			));
		}
		catch (ComponentManagerException &e) {
			throw e;
		}
	}
}

void Parser::handleLink(const std::string &line)
{
	std::vector<std::string> args = split(line, ' ');
	std::vector<std::string> arg1;
	std::vector<std::string> arg2;

	if (args.size() < 2 || args[1].length() == 0)
		throw ParserException("Invalid link syntax.", "Input File");
	arg1 = split(args[0], ':');
	arg2 = split(args[1], ':');
	if (arg1.size() < 2 || arg2.size() < 2 ||
		arg1[1].length() == 0 || arg2[1].length() == 0)
		throw ParserException("Invalid link syntax.", "Input File");
	try {
		this->listComponent[this->findComponent(arg1[0])].second->
			setLink(std::stoi(arg1[1]), *(this->listComponent[
			this->findComponent(arg2[0])].second),
			std::stoi(arg2[1]));
	}
	catch (ParserException &e) {
		throw e;
	}
}

ssize_t Parser::findComponent(
	const std::string &name)
{
	ssize_t ret = -1;

	for (ssize_t it = 0; it < this->listComponent.size(); ++it)
	{
		if (this->listComponent[it].first == name)
		{
			ret = it;
			break;
		}
	}
	if (ret == (-1))
		throw ParserException(
			"Component doesn't exist", "Input File Link");
	return (ret);
}

std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *Parser::getOutput()
{
	return (&listComponent);
}