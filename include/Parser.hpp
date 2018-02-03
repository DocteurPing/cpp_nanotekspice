/*
** EPITECH PROJECT, 2018
** Parser
** File description:
** Parser
*/

#ifndef PARSER_HPP_
	#define PARSER_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include "Exceptions/ParserException.hpp"
#include "Components/ComponentManager.hpp"

class Parser {
	public:
	Parser(const std::string &file);
	~Parser();
	std::string process();


	private:
	std::string getline();
	std::string checkerror(std::string);
	ComponentSpecial getComposentUsed(std::string);
	typedef enum ESection
	{
		CHIPSETS,
		LINKS,
		UNKNOWN
	} Section;

	std::ifstream ifs;
	Section section = UNKNOWN;
	std::vector<std::pair<std::string, ComponentInput>> listInput;
	std::vector<std::pair<std::string, ComponentOutput>> listOutput;
	std::vector<std::pair<std::string, ComponentSpecial>> listComponent;
};

#endif /* !PARSER_HPP_ */