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
	void process();
	std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *getOutput();


	private:
	std::string getline() noexcept;
	void handleInput(const std::string &line);
	void handleChipset(const std::string &line);
	void handleLink(const std::string &line);
	ssize_t findComponent(const std::string &name);
	typedef enum ESection
	{
		CHIPSETS,
		LINKS,
		UNKNOWN
	} Section;

	std::ifstream ifs;
	Section section = UNKNOWN;
	nts::ComponentManager cm;
	std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>>
		listComponent;
};

#endif /* !PARSER_HPP_ */