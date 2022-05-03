#include "Wearable.h"

Wearable::Wearable(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, std::string m_second_target, double m_second_value, std::string m_equipment_slot)
{
	name = m_name;
	description = m_description;
	first_target = m_first_target;
	first_value = m_first_value;
	second_target = m_second_target;
	second_value = m_second_value;
	equipment_slot = m_equipment_slot;
};

Wearable::Wearable()
{
	//generates a number between 1 and 8 to generate a wearable
	int item = std::rand() % 8 + 1;

	//Wearable : name, description, first target, first value, equipment_slot
	if (item == 1)
	{
		name = "Steel armour";
		description = "A set of steel armour, very shinny";
		first_target = "defence";
		first_value = 4;
		second_target = "dodge";
		second_value = -0.2;
		equipment_slot = "chest";
	}
	else if (item == 2)
	{
		name = "Leather cowl";
		description = "A simple hood, looks cool";
		first_target = "defence";
		first_value = 0;
		second_target = "dodge";
		second_value = 0.01;
		equipment_slot = "head";
	}
	else if (item == 3)
	{
		name = "Steel armour";
		description = "A set of steel armour, very shinny";
		first_target = "defence";
		first_value = 4;
		second_target = "dodge";
		second_value = -0.2;
		equipment_slot = "chest";
	}
	else if (item == 4)
	{
		name = "Leather armour";
		description = "A set of leather armour";
		first_target = "defence";
		first_value = 2;
		second_target = "dodge";
		second_value = 0.02;
		equipment_slot = "chest";
	}
	else if (item == 5)
	{
		name = "Steel gauntlets";
		description = "A pair of steel gauntlets";
		first_target = "defence";
		first_value = 2;
		second_target = "dodge";
		second_value = -0.02;
		equipment_slot = "hands";
	}
	else if (item == 6)
	{
		name = "Leather gloves";
		description = "A pair of leather gloves";
		first_target = "defence";
		first_value = 1;
		second_target = "dodge";
		second_value = 0.02;
		equipment_slot = "hands";
	}
	else if (item == 7)
	{
		name = "Steel boots";
		description = "A pair of steel boots";
		first_target = "defence";
		first_value = 2;
		second_target = "dodge";
		second_value = -0.03;
		equipment_slot = "feet";
	}
	else if (item == 8)
	{
		name = "Leather boots";
		description = "A pair of leather boots";
		first_target = "defence";
		first_value = 1;
		second_target = "dodge";
		second_value = 0.03;
		equipment_slot = "feet";
	}
};

std::string Wearable::Get_slot()
{
	return equipment_slot;
}

void Wearable::Input()
{
	std::cout << "Nothing is here" << std::endl;
}

std::string Wearable::Get_name()
{
	return name;
}

void Wearable::Examine()
{
	std::cout << description << std::endl;
}

void Wearable::Get_affects(std::string& m_first_target, double& m_first_value, std::string& m_second_target, double& m_second_value, std::string& m_equipment_slot)
{
	m_first_target = first_target;
	m_first_value = first_value;
	m_second_target = second_target;
	m_second_value = second_value;
	m_equipment_slot = equipment_slot;
}