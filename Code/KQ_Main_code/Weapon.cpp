#include "Weapon.h"

//Weapon::Weapon(std::string m_name, std::string m_description, int m_affects, std::string m_first_target, double m_first_value, int m_uses)
//{
//	name = m_name;
//	description = m_description;
//	affects = m_affects;
//	first_target = m_first_target;
//	first_value = m_first_value;
//	second_target = "";
//	second_value = 0;
//	uses = m_uses;
//
//};

Weapon::Weapon(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, std::string m_second_target, double m_second_value, int m_slot_size)
{
	name = m_name;
	description = m_description;
	first_target = m_first_target;
	first_value = m_first_value;
	second_target = m_second_target;
	second_value = m_second_value;
	slot_size = m_slot_size;
};

Weapon::Weapon()
{
	//generates a number between 1 and 7 to generate a weapon
	int item = std::rand() % 7 + 1;

	//Weapon : name, description, first target, first value, slot_size
	if (item == 1)
	{
		name = "Hand Axe";
		description = "A steel axe, good for cutting trees down";
		first_target = "attack";
		first_value = 6;
		second_target = "dodge";
		second_value = -0.05;
		slot_size = 1;
	}
	else if (item == 2)
	{
		name = "War Axe";
		description = "A big two-handed steel axe. Helps with fighting but slows you down";
		first_target = "attack";
		first_value = 12;
		second_target = "dodge";
		second_value = -0.1;
		slot_size = 2;
	}
	else if (item == 3)
	{
		name = "Bow";
		description = "A simple bow. Comes with arrows";
		first_target = "attack";
		first_value = 8;
		second_target = "dodge";
		second_value = -0.06;
		slot_size = 2;
	}
	else if (item == 4)
	{
		name = "Dagger";
		description = "A steel blade, children's size";
		first_target = "attack";
		first_value = 4;
		second_target = "dodge";
		second_value = 0.02;
		slot_size = 1;
	}
	else if (item == 5)
	{
		name = "Sword";
		description = "A common sword";
		first_target = "attack";
		first_value = 5;
		second_target = "dodge";
		second_value = -0.04;
		slot_size = 1;
	}
	else if (item == 6)
	{
		name = "Greatsword";
		description = "Like a steel sword, but bigger";
		first_target = "attack";
		first_value = 10;
		second_target = "dodge";
		second_value = -0.08;
		slot_size = 2;
	}
	else if (item == 7)
	{
		name = "Shield";
		description = "A metal plate, protects you from damage";
		first_target = "defence";
		first_value = 4;
		second_target = "dodge";
		second_value = -0.04;
		slot_size = 1;
	}
	else
	{
		name = "Hand Axe";
		description = "A steel axe, good for cutting trees down";
		first_target = "attack";
		first_value = 6;
		second_target = "dodge";
		second_value = -0.05;
		slot_size = 1;
	}
};

void Weapon::Input()
{
	std::cout << "Nothing is here" << std::endl;

}

std::string Weapon::Get_name()
{
	return name;
}

void Weapon::Examine()
{
	std::cout << description << std::endl;
}

std::string Weapon::Get_first_target()
{
	return first_target;
}

int Weapon::Get_first_value()
{
	return first_value;
}

std::string Weapon::Get_second_target()
{
	return second_target;
}

int Weapon::Get_second_value()
{
	return second_value;
}

void Weapon::Get_affects(std::string& m_first_target, double& m_first_value, std::string& m_second_target, double& m_second_value, int& m_slot_size)
{
	m_first_target = first_target;
	m_first_value = first_value;
	m_second_target = second_target;
	m_second_value = second_value;
	m_slot_size = slot_size;
}