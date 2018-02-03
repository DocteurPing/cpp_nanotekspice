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
#include "Components/ComponentTrue.hpp"
#include "Components/ComponentFalse.hpp"
#include "Components/ComponentOutput.hpp"

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
		ComponentPtr create2716(
			const std::string &value) const noexcept;
		ComponentPtr create4001(
			const std::string &value) const noexcept;
		ComponentPtr create4008(
			const std::string &value) const noexcept;
		ComponentPtr create4011(
			const std::string &value) const noexcept;
		ComponentPtr create4013(
			const std::string &value) const noexcept;
		ComponentPtr create4017(
			const std::string &value) const noexcept;
		ComponentPtr create4030(
			const std::string &value) const noexcept;
		ComponentPtr create4040(
			const std::string &value) const noexcept;
		ComponentPtr create4069(
			const std::string &value) const noexcept;
		ComponentPtr create4071(
			const std::string &value) const noexcept;
		ComponentPtr create4081(
			const std::string &value) const noexcept;
		ComponentPtr create4094(
			const std::string &value) const noexcept;
		ComponentPtr create4514(
			const std::string &value) const noexcept;
		ComponentPtr create4801(
			const std::string &value) const noexcept;
		ComponentPtr createInput(
			const std::string &value) const noexcept;
		ComponentPtr createClock(
			const std::string &value) const noexcept;
		ComponentPtr createTrue(
			const std::string &value) const noexcept;
		ComponentPtr createFalse(
			const std::string &value) const noexcept;
		ComponentPtr createOutput(
			const std::string &value) const noexcept;

		std::unordered_map<
			std::string,
			ComponentPtr (ComponentManager::*)
				(const std::string &value) const noexcept
		> createMap;
	};
}

#endif /* !COMPONENTMANAGER_HPP_ */
