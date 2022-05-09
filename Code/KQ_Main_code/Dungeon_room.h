#pragma once
#include "Room.h"
#include "Hero.h"
#include "Enemy.h"

#include "Item.h"
#include "Consumable.h"
#include "Weapon.h"
#include "Wearable.h"
class Dungeon_room : public Room
{
private:
	std::string description;
	int difficulty;
	std::vector<Enemy> List_of_enemies;
	std::vector<Item*> List_of_items;

public:
	Dungeon_room(int m_difficulty);
	int Combat(Hero);
	void Display_room();
	void Input() override;
	void Transfer_items(Hero&);
	std::string Get_name() override;
	int Get_item_number();
	void Get_items();
	int Get_enemies();
	void Examine() override;
};