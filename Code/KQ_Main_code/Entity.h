#pragma once
#include "Interface.h"
#include "Consumable.h"
#include "Weapon.h"
#include "Wearable.h"
class Entity : public Interface
{
protected:

    std::vector<Weapon> List_of_weapon_items;
    std::vector<Wearable> List_of_wearable_items;
    std::vector<Consumable> List_of_consumable_items;
    std::string name;
    std::string description;
    //std::string entity_class;
    int health;
    int attack;
    int defence;
    double dodge;
	int attacks;

};