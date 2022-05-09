#include "Enemy.h"

Enemy::Enemy(std::string m_name, std::string m_description, int m_health, int m_attack, int m_defence, double m_dodge, int m_attacks)
{
	name = m_name;
	description = m_description;
	health = m_health;
	attack = m_attack;
	defence = m_defence;
	dodge = m_dodge;
	attacks = m_attack;
}

Enemy::Enemy()
{
	//generates a number between 1 and 5 to generate an enemy
	int enemy = std::rand() % 5 + 1;

	//Enemy : name, description, health, attack, defence, dodge, number of attacks
	if (enemy == 1)
	{
		name = "Goblin";
		description = "A small and vicious green creature";
		health = 5;
		attack = 2;
		defence = 0;
		dodge = 0.15;
		attacks = 1;
	}
	else if (enemy == 2)
	{
		name = "Orc";
		description = "A big and strong green creature";
		health = 15;
		attack = 5;
		defence = 3;
		dodge = 0;
		attacks = 1;
	}
	else if (enemy == 3)
	{
		name = "Rat";
		description = "A big furry rodent, has big claws";
		health = 8;
		attack = 3;
		defence = 2;
		dodge = 0.25;
		attacks = 1;
	}
	else if (enemy == 4)
	{
		name = "Skeleton";
		description = "A skeleton that walks, spooky!";
		health = 7;
		attack = 2;
		defence = 0;
		dodge = 0.1;
		attacks = 1;
	}
	else if (enemy == 5)
	{
		Enemy generated_enemy("Zombie", "A fallen humanoid", 8, 2, 2, 0, 1);
		name = "Zombie";
		description = "A fallen humanoid";
		health = 8;
		attack = 2;
		defence = 2;
		dodge = 0;
		attacks = 1;
	}
	else
	{
		name = "Goblin";
		description = "A small and vicious green creature";
		health = 5;
		attack = 2;
		defence = 0;
		dodge = 0.15;
		attacks = 1;
	}

	//picks a number between 2 and 0
	int item_number = std::rand() % 2;

	for (int i = 0; i < item_number; i++)
	{
		int type = std::rand() % 3 + 1;
	
		if (type == 1)
			Inventory.push_back(new Weapon);
	
		else if (type == 2)
			
			Inventory.push_back(new Wearable);
	
		else if (type == 3)
			Inventory.push_back(new Consumable);
	}
}

int Enemy::Get_health()
{
	return health;
}

void Enemy::Transfer_items(std::vector <Item*> & m_vector)
{
	for (int i = 0; i < Inventory.size(); i++)
	{
		m_vector.push_back(Inventory[i]);
		Inventory.erase(Inventory.begin() + i);
	}
}

void Enemy::Input()
{
	std::cout << "It's a " << name << std::endl;
}

std::string Enemy::Get_name()
{
	return name;
}

void Enemy::Examine()
{
	std::cout << description << std::endl;
}