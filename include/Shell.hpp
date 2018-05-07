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

namespace nts {
	class Shell {
		public:
		Shell();
		~Shell();
		void exit(void);
		void display(void);
		void simulate(void);
		void loop(void);
		void dump(void);

		protected:
		private:
		std::unordered_map<std::string, std::function<void(void)>> cmd;
		std::unordered_map<std::size_t, nts::IComponent *> outputs;
		bool isexit;
	};
}

#endif /* !SHELL_HPP_ */
