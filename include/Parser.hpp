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
#include "Exceptions/ParserException.hpp"

class Parser {
	public:
	Parser(const std::string &file);
	~Parser();
	std::string getChipset();

	private:
	std::string getline();
	typedef enum ESection
	{
		CHIPSETS,
		LINKS,
		UNKNOWN
	} Section;

	std::ifstream ifs;
	Section section = UNKNOWN;
};

#endif /* !PARSER_HPP_ */