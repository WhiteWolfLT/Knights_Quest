#pragma once
#include "Interface.h"
#include "Consumable.h"
#include "Weapon.h"
#include "Wearable.h"
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