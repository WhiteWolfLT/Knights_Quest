#include "Dungeon_room.h"
//#include "Enemy.h"
Dungeon_room::Dungeon_room(int m_difficulty)
{
	//Creates a seed based on time for random number generation, time is from the time.h library
	srand(time(0));

	int enemy_number = 1;
	int item_number = 1, type = 3;

	//int weapon_number = 1, weapon;
	//int consumable_number = 1, consumable;
	//int wearable_number = 1, werable;

	//Consumable generated_item("Health potion", "Heals you", 1 , "health", 5, 1);
	//List_of_items.push_back(generated_item);
	//List_of_items

	/*
	difficulty translation
	easy = 1
	medium = 2
	hard = 3
	*/

	difficulty = m_difficulty;

	//generates number for generation
	switch(difficulty)
	{
	case 1:
		//picks a number between 2 and 0
		enemy_number = std::rand() % 2;
		//picks a number between 2 and 1
		item_number = std::rand() % 2 + 1;
		break;
	case 2:
		//picks a number between 2 and 1
		enemy_number = std::rand() % 2 + 1;
		//picks a number between 2 and 0
		item_number = std::rand() % 2 ;
		break;
	case 3:
		//picks a number between 3 and 1
		enemy_number = std::rand() % 3 + 1;
		//picks a number between 0 and 1
		item_number = std::rand() % 1;
		break;
	default:
		enemy_number = 1;
		item_number = 1;
		break;
	}

	//Enemy generation in a room
	for (int i = 0; i < enemy_number; i++)
	{
		Enemy generated_enemy;
		List_of_enemies.push_back(generated_enemy);
	}	

	//Item generation in a room
	for (int i = 0; i < item_number; i++)
	{
		type = std::rand() % 3 + 1;

		if (type == 1)
		{
			Weapon generated_item;
			List_of_weapon_items.push_back(generated_item);
		}

		else if (type == 2)
		{
			Wearable generated_item;
			List_of_wearable_items.push_back(generated_item);
		}

		else if (type == 3)
		{
			Consumable generated_item;
			List_of_consumable_items.push_back(generated_item);
		}
	}

	for (int i = 0; i < enemy_number; i++)
	{
		List_of_enemies[i].Get_name();
	}

	Hero Knight;
	Knight.Display_inventory();
}

void Dungeon_room::Input()
{
	std::cout << "nothing is here yet" << std::endl;
}

std::string Dungeon_room::Get_name()
{
	std::cout << name << std::endl;
}

void Dungeon_room::Examine()
{
	std::cout << description << std::endl;
}