/*
** EPITECH PROJECT, 2018
** ComponentManager
** File description:
** ComponentManager
*/

#include "Components/ComponentManager.hpp"

nts::ComponentManager::ComponentManager()
{
	this->createMap["2716"] = CREATE_MAP(Component2716);
	this->createMap["4001"] = CREATE_MAP(Component4001);
	this->createMap["4008"] = CREATE_MAP(Component4008);
	this->createMap["4011"] = CREATE_MAP(Component4001);
	this->createMap["4013"] = CREATE_MAP(Component4013);
	this->createMap["4017"] = CREATE_MAP(Component4017);
	this->createMap["4030"] = CREATE_MAP(Component4030);
	this->createMap["4040"] = CREATE_MAP(Component4040);
	this->createMap["4069"] = CREATE_MAP(Component4069);
	this->createMap["4071"] = CREATE_MAP(Component4071);
	this->createMap["4081"] = CREATE_MAP(Component4081);
	this->createMap["4094"] = CREATE_MAP(Component4094);
	this->createMap["4514"] = CREATE_MAP(Component4514);
	this->createMap["4801"] = CREATE_MAP(Component4801);
	this->createMap["input"] = CREATE_MAP(ComponentInput);
	this->createMap["clock"] = CREATE_MAP(ComponentClock);
	this->createMap["output"] = CREATE_MAP(ComponentOutput);
	this->createMap["true"] = CREATE_MAP(ComponentTrue);
	this->createMap["false"] = CREATE_MAP(ComponentFalse);
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
	return (this->createMap[type](value));
}

template<typename T>
nts::ComponentManager::ComponentPtr nts::ComponentManager::create(
		const std::string &value)
{
	return (static_cast<nts::ComponentManager::ComponentPtr>(
			std::make_unique<T>(value)
		));
}