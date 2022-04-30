#pragma once
#include "Room.h"
#include "Hero.h"
#include "Enemy.h"
#include "Consumable.h"
#include "Weapon.h"
#include "Wearable.h"
class Dungeon_room : public Room
{
private:
	std::string description;
	int difficulty;
	std::vector<Enemy> List_of_enemies;
	std::vector<Weapon> List_of_weapon_items;
	std::vector<Wearable> List_of_wearable_items;
	std::vector<Consumable> List_of_consumable_items;

public:
	Dungeon_room(int m_difficulty);

	void Input() override;

	std::string Get_name() override;

	void Examine() override;
};