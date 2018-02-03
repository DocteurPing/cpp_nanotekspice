/*
** EPITECH PROJECT, 2018
** ComponentManager
** File description:
** ComponentManager
*/

#include "Components/ComponentManager.hpp"

template<typename T>
static nts::ComponentManager::ComponentPtr create(const std::string &value)
{
	return (static_cast<nts::ComponentManager::ComponentPtr>(
			std::make_unique<T>(value)
		));
}

nts::ComponentManager::ComponentManager()
{
	this->createMap["2716"] = LAMBDA_CREATEFNC(Component2716);
	this->createMap["4001"] = LAMBDA_CREATEFNC(Component4001);
	this->createMap["4008"] = LAMBDA_CREATEFNC(Component4008);
	this->createMap["4011"] = LAMBDA_CREATEFNC(Component4001);
	this->createMap["4013"] = LAMBDA_CREATEFNC(Component4013);
	this->createMap["4017"] = LAMBDA_CREATEFNC(Component4017);
	this->createMap["4030"] = LAMBDA_CREATEFNC(Component4030);
	this->createMap["4040"] = LAMBDA_CREATEFNC(Component4040);
	this->createMap["4069"] = LAMBDA_CREATEFNC(Component4069);
	this->createMap["4071"] = LAMBDA_CREATEFNC(Component4071);
	this->createMap["4081"] = LAMBDA_CREATEFNC(Component4081);
	this->createMap["4094"] = LAMBDA_CREATEFNC(Component4094);
	this->createMap["4514"] = LAMBDA_CREATEFNC(Component4514);
	this->createMap["4801"] = LAMBDA_CREATEFNC(Component4801);
	this->createMap["input"] = LAMBDA_CREATEFNC(ComponentInput);
	this->createMap["clock"] = LAMBDA_CREATEFNC(ComponentClock);
	this->createMap["true"] = LAMBDA_CREATEFNC(ComponentTrue);
	this->createMap["false"] = LAMBDA_CREATEFNC(ComponentFalse);
	this->createMap["output"] = LAMBDA_CREATEFNC(ComponentOutput);
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