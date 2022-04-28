#include "Dungeon_room.h"
#include "Enemy.h"
Dungeon_room::Dungeon_room(int m_difficulty)
{
	srand(time(0));
	int random_number;
	difficulty = m_difficulty;

	switch(difficulty)
	{
	case 1:

	}
	//Creates a seed based on time for random number generation, time is from the time.h library
	
	random_number = std::rand() % 3 + 1;
	std::cout << random_number << std::endl;
	for (int i = 0; i < random_number; i++)
	{
		Enemy generated_enemy("Goblin", "A small and vicious green creature", 5, 2, 1, 0.25, 1);
		//Enemy generated_enemy();
		generated_enemy.Get_name();
		generated_enemy.Examine();
		List_of_enemies.push_back(generated_enemy);
	}
}