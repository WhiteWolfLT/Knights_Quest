#include "Dungeon_room.h"
//#include "Enemy.h"
Dungeon_room::Dungeon_room(int m_difficulty)
{
	name = "Dungeon";
	description = "a spooky dungeon room, chains and skulls are everywhere";

	int enemy_number = 1;
	int item_number = 1, type = 3;

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
	
	for (int i = 0; i < item_number; i++)
	{
		type = std::rand() % 3 + 1;
	
		if (type == 1)
			List_of_items.push_back(new Weapon);
	
		else if (type == 2)
			List_of_items.push_back(new Wearable);
	
		else if (type == 3)
			List_of_items.push_back(new Consumable);
	}
}
int Dungeon_room::Combat(Hero m_hero)
{
	int attack_chance = 0, return_number = 0;
	int n_attacks = 0, n_dodge_chance = 0;
	double n_attack = 0, n_defend = 0, n_dodge = 0;
	int m_attacks = 0, m_dodge_chance = 0;
	double m_attack = 0, m_defend = 0, m_dodge = 0;

	m_hero.Attack(m_attack, m_attacks);
	m_hero.Defend(m_defend, m_dodge);
	m_dodge_chance = m_dodge * 100;

	for (int i = 0; i < List_of_enemies.size(); i++)
	{
		List_of_enemies[i].Attack(n_attack, n_attacks);
		
		for (int l = 0; l < n_attacks; l++)
		{
			attack_chance = std::rand() % 100;
			if (attack_chance > m_dodge_chance)
			{
				n_attack -= m_defend;
				if (n_attack > 0)
					return_number += n_attack;
			}
		}
	}

	List_of_enemies[0].Defend(n_defend, n_dodge);
	n_dodge_chance = n_dodge * 100;
	attack_chance = std::rand() % 100;

	if (attack_chance > n_dodge_chance)
	{
		m_attack -= n_defend;
		if (n_attack > 0)
			List_of_enemies[0].Damage(n_attack);
		if (List_of_enemies[0].Get_health() <= 0)
		{
			List_of_enemies[0].Transfer_items(List_of_items);
			List_of_enemies.erase(List_of_enemies.begin() + 0);
		}
	}
	return return_number;
}

void Dungeon_room::Display_room()
{
	std::cout << "You're in " << description << std::endl << std::endl;

	if (List_of_enemies.size() > 0)
	{
		std::cout << "You are surrounded by :" << std::endl << std::endl;
		for (int i = 0; i < List_of_enemies.size(); i++)
		{
			std::cout << List_of_enemies[i].Get_name() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "What do you want to do? :" << std::endl << std::endl;	
		std::cout << "Fight" << std::endl;
		std::cout << "Search" << std::endl;
		std::cout << "Backtrack" << std::endl;
		std::cout << "Inventory" << std::endl;
		std::cout << "Quit" << std::endl << std::endl;
	}

	if (List_of_enemies.size() == 0)
	{
		std::cout << "What do you want to do? :" << std::endl << std::endl;
		std::cout << "Forward" << std::endl;
		std::cout << "Backtrack" << std::endl;
		std::cout << "Search" << std::endl;
		std::cout << "Inventory" << std::endl;
		std::cout << "Quit" << std::endl << std::endl;
	}
}

void Dungeon_room::Transfer_items(Hero & m_knight)
{
	while (List_of_items.size() > 0)
	{
		m_knight.Add_item_to_inventory(List_of_items[0]);
		List_of_items.erase(List_of_items.begin() + 0);
	}
}

void Dungeon_room::Input()
{
	std::cout << "nothing is here yet" << std::endl;
}

std::string Dungeon_room::Get_name()
{
	return name;
}

void Dungeon_room::Get_items()
{
	for (int i = 0; i < List_of_items.size(); i++)
	{
		std::cout << List_of_items[i]->Get_name() << std::endl;
	}
}

int Dungeon_room::Get_item_number()
{
	return List_of_items.size();
}

int Dungeon_room::Get_enemies()
{
	return List_of_enemies.size();
}

void Dungeon_room::Examine()
{
	std::cout << description;
}