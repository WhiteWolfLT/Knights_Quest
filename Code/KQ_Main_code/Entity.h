#pragma once
#include "Interface.h"
class Entity : protected Interface
{
protected:
    std::string name;
    std::string description;
    //std::string entity_class;
    int health;
    int attack;
    int defence;
    double dodge;

	int attacks;

public:

	void Interface::Input() override
	{
		std::cout << "temp";
	};

	void Interface::Get_name() override
	{
		std::cout << name << std::endl;
	};

	void Interface::Examine() override
	{
		std::cout << description << std::endl;
	};
};