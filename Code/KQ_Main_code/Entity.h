#pragma once
#include "Interface.h"
class Entity : public Interface
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

};