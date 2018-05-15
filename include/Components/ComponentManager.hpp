/*
** EPITECH PROJECT, 2018
** ComponentManager
** File description:
** ComponentManager
*/

#ifndef COMPONENTMANAGER_HPP_
	#define COMPONENTMANAGER_HPP_

#include <memory>
#include "Exceptions/ComponentManagerException.hpp"
#include "IComponent.hpp"
#include "Components/Component2716.hpp"
#include "Components/Component4001.hpp"
#include "Components/Component4008.hpp"
#include "Components/Component4011.hpp"
#include "Components/Component4013.hpp"
#include "Components/Component4017.hpp"
#include "Components/Component4030.hpp"
#include "Components/Component4040.hpp"
#include "Components/Component4069.hpp"
#include "Components/Component4071.hpp"
#include "Components/Component4081.hpp"
#include "Components/Component4094.hpp"
#include "Components/Component4514.hpp"
#include "Components/Component4801.hpp"
#include "Components/ComponentInput.hpp"
#include "Components/ComponentClock.hpp"
#include "Components/ComponentOutput.hpp"

#define CREATE_MAP(X) \
	(std::bind(&nts::ComponentManager::create<X>, \
		this, std::placeholders::_1))

namespace nts
{
	class ComponentManager
	{
		public:
		ComponentManager();
		~ComponentManager();

		typedef std::unique_ptr<nts::IComponent> ComponentPtr;
		ComponentPtr createComponent(
			const std::string &type, const std::string &value);

		private:
		std::unordered_map<
			std::string,
			std::function<ComponentPtr(const std::string &)>
		> createMap;

		template<typename T>
		ComponentPtr create(const std::string &value);
	};
}

#endif /* !COMPONENTMANAGER_HPP_ */
