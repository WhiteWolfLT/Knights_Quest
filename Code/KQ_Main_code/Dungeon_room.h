#pragma once
#include "Room.h"
#include "Enemy.h"
#include "Consumable.h"
#include "Weapon.h"
#include "Wearable.h"
class Dungeon_room : private Room
{
public:
	std::string description;
	int difficulty;
	std::vector<std::string> List_of_options;
	std::vector<Enemy> List_of_enemies;
	std::vector<Item*> List_of_items;

	Dungeon_room(int m_difficulty);

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