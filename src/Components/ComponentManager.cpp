/*
** EPITECH PROJECT, 2018
** ComponentManager
** File description:
** ComponentManager
*/

#include "Components/ComponentManager.hpp"

nts::ComponentManager::ComponentManager()
{
	this->createMap["2716"] = &nts::ComponentManager::create2716;
	this->createMap["4001"] = &nts::ComponentManager::create4001;
	this->createMap["4008"] = &nts::ComponentManager::create4008;
	this->createMap["4011"] = &nts::ComponentManager::create4011;
	this->createMap["4013"] = &nts::ComponentManager::create4013;
	this->createMap["4017"] = &nts::ComponentManager::create4017;
	this->createMap["4030"] = &nts::ComponentManager::create4030;
	this->createMap["4040"] = &nts::ComponentManager::create4040;
	this->createMap["4069"] = &nts::ComponentManager::create4069;
	this->createMap["4071"] = &nts::ComponentManager::create4071;
	this->createMap["4081"] = &nts::ComponentManager::create4081;
	this->createMap["4094"] = &nts::ComponentManager::create4094;
	this->createMap["4514"] = &nts::ComponentManager::create4514;
	this->createMap["4801"] = &nts::ComponentManager::create4801;
	this->createMap["input"] = &nts::ComponentManager::createInput;
	this->createMap["clock"] = &nts::ComponentManager::createClock;
	this->createMap["true"] = &nts::ComponentManager::createTrue;
	this->createMap["false"] = &nts::ComponentManager::createFalse;
	this->createMap["output"] = &nts::ComponentManager::createOutput;
}

nts::ComponentManager::~ComponentManager()
{
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::createComponent(
	const std::string &type, const std::string &value)
{
	if (this->createMap.find(type) == this->createMap.end())
		throw ComponentManagerException(
			"Unknown Component", "Component Creation"
		);
	return ((this->*this->createMap[type])(value));

}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create2716(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component2716>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4001(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4001>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4008(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4008>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4011(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4011>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4013(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4013>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4017(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4017>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4030(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4030>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4040(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4040>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4069(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4069>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4071(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4071>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4081(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4081>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4094(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4094>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4514(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4514>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::create4801(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(
			std::make_unique<Component4801>(value))
		);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::createInput(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(std::make_unique<ComponentInput>(
		static_cast<std::size_t>(std::stoul(value))))
	);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::createClock(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(std::make_unique<ComponentClock>(
		static_cast<std::size_t>(std::stoul(value))))
	);
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::createTrue(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(std::make_unique<ComponentTrue>()));
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::createFalse(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(std::make_unique<ComponentFalse>()));
}

nts::ComponentManager::ComponentPtr nts::ComponentManager::createOutput(
	const std::string &value) const noexcept
{
	return (static_cast<ComponentPtr>(std::make_unique<ComponentOutput>()));
}