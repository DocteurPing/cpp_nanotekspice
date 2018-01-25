/*
** EPITECH PROJECT, 2018
** nts
** File description:
** nts
*/

#include "nts.hpp"
#include "Parser.hpp"

int main(int argc, char **argv)
{
	std::string line;
	Parser p(argv[1]);

	p.getChipset();
	/* while ((line = p.getline()) != "")
	{
		std::cout << "Line: " << line << std::endl;
	} */
	return (0);
}
