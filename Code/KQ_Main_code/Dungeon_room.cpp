#include "Dungeon_room.h"
#include "Enemy.h"
Dungeon_room::Dungeon_room(int m_difficulty)
{
	//Creates a seed based on time for random number generation, time is from the time.h library
	srand(time(0));
	int random_number = 1, enemy;

	/*
	difficulty translation
	easy = 1
	medium = 2
	hard = 3
	*/

	difficulty = m_difficulty;

	//generates number of enemies per room
	switch(difficulty)
	{
	case 1:
		//picks a number between 2 and 0
		random_number = std::rand() % 2;
		break;
	case 2:
		//picks a number between 2 and 1
		random_number = std::rand() % 2 + 1;
		break;
	case 3:
		//picks a number between 3 and 1
		random_number = std::rand() % 3 + 1;
		break;
	default:
		random_number = 1;
		break;
	}
	
	std::cout << "Difficulty : " << difficulty << std::endl;
	std::cout << "Random number : " << random_number << std::endl;

	for (int i = 0; i < random_number; i++)
	{
		//generates a number between 1 and 5 to generate an enemy
		enemy = std::rand() % 5 + 1;

		//Enemy : name, description, health, attack, defence, dodge, number of attacks
		if (enemy == 1)
		{
			Enemy generated_enemy("Goblin", "A small and vicious green creature", 5, 2, 0, 0.15, 1);
			List_of_enemies.push_back(generated_enemy);
		}
		else if (enemy == 2)
		{
			Enemy generated_enemy("Orc", "A big and strong green creature", 15, 5, 3, 0, 1);
			List_of_enemies.push_back(generated_enemy);
		}
		else if (enemy == 3)
		{
			Enemy generated_enemy("Rat", "A big furry rodent, has big claws", 8, 3, 2, 0.25, 1);
			List_of_enemies.push_back(generated_enemy);
		}
		else if (enemy == 4)
		{
			Enemy generated_enemy("Skeleton", "A skeleton that walks, spooky!", 7, 2, 0, 0.1, 1);
			List_of_enemies.push_back(generated_enemy);
		}
		else if (enemy == 5)
		{
			Enemy generated_enemy("Zombie", "A fallen humanoid", 8, 2, 2, 0, 1);
			List_of_enemies.push_back(generated_enemy);
		}
	}

	//for (int i = 0; i < random_number; i++)
	//{
	//	List_of_enemies[i].Get_name();
	//}
}