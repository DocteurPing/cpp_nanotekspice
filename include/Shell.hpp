/*
** EPITECH PROJECT, 2018
** cpp_nanotekspice
** File description:
** Shell
*/

#ifndef SHELL_HPP_
	#define SHELL_HPP_

#include "nts.hpp"
#include "IComponent.hpp"
#include <unordered_map>
#include <functional>
#include <signal.h>
#include <unistd.h>
#include <vector>
#include <memory>

namespace nts {
	class Shell {
		public:
		Shell();
		~Shell();
		bool getisloop(void);
		void setisloop(bool);
		void exit(void);
		void display(void);
		void simulate(void);
		void loop(void);
		void dump(void);
		void run(void);
		void setOutput(std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *);
		std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *getOutput();

		protected:
		private:
		std::unordered_map<std::string, std::function<void(void)>> cmd;
		std::vector<std::pair<std::string, std::unique_ptr<nts::IComponent>>> *listComponent;
		std::vector<std::pair<std::string, nts::Tristate>> output;
		bool isexit;
		bool isloop;
	};
}

#endif /* !SHELL_HPP_ */
