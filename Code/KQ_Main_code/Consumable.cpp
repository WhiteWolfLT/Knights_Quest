#include "Consumable.h"

Consumable::Consumable(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, int m_uses)
{
	name = m_name;
	description = m_description;
	first_target = m_first_target;
	first_value = m_first_value;
	second_target = "";
	second_value = 0;
	uses = m_uses;

};

Consumable::Consumable(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, std::string m_second_target, double m_second_value, int m_uses)
{
	name = m_name;
	description = m_description;
	first_target = m_first_target;
	first_value = m_first_value;
	second_target = m_second_target;
	second_value = m_second_value;
	uses = m_uses;
};

Consumable::Consumable()
{
	//generates a number between 1 and 5 to generate a consumable
	int item = std::rand() % 5 + 1;

	//Consumable : name, description, first target, first value, uses
	if (item == 1)
	{
		name = "Health potion";
		description = "Heals you";
		first_target = "health";
		first_value = 5;
		second_target = "";
		second_value = 0;
		uses = 1;
	}
	else if (item == 2)
	{
		name = "Big health potion";
		description = "Heals you but you can use it 2 times";
		first_target = "health";
		first_value = 5;
		second_target = "";
		second_value = 0;
		uses = 2;
	}
	else if (item == 3)
	{
		name = "Attack potion";
		description = "Increases your damage";
		first_target = "damage";
		first_value = 1;
		second_target = "";
		second_value = 0;
		uses = 1;
	}
	else if (item == 4)
	{
		name = "Defence potion";
		description = "Increases your armour";
		first_target = "defence";
		first_value = 1;
		second_target = "";
		second_value = 0;
		uses = 1;
	}
	else if (item == 5)
	{
		name = "Agility potion";
		description = "Increases your dodge";
		first_target = "dodge";
		first_value = 0.1;
		second_target = "";
		second_value = 0;
		uses = 1;
	}
	else
	{
		name = "Health potion";
		description = "Heals you";
		first_target = "health";
		first_value = 5;
		second_target = "";
		second_value = 0;
		uses = 1;
	}
};

void Consumable::Input()
{
	std::cout << "It's a " << name << std::endl;
}

std::string Consumable::Get_name()
{
	return name;
}

void Consumable::Examine()
{
	std::cout << description << std::endl;
}