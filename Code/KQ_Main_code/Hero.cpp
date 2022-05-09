#include "Hero.h"

void Hero::Accumalate_equipment(int iterator)
{
	//1 to accumalate
	//2 to retract

	std::string m_first_target, m_second_target;
	double m_first_value, m_second_value;
	int m_equipment_slot;

	if (iterator == 1)
		for (int i = 0; i < Equiped_items.size(); i++)
		{
			Equiped_items[i]->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, m_equipment_slot);

			if (m_first_target == "health")
				health += m_first_value;
			else if (m_first_target == "attack")
				attack += m_first_value;
			else if (m_first_target == "defence")
				defence += m_first_value;
			else if (m_first_target == "dodge")
			{
				dodge = dodge + m_first_value;
				if (dodge >= max_dodge)
					dodge = max_dodge;
				else if (dodge <= 0.009)
					dodge = 0.0;
			}

			if (m_second_target == "health")
				health += m_second_value;
			else if (m_second_target == "attack")
				attack += m_second_value;
			else if (m_second_target == "defence")
				defence += m_second_value;
			else if (m_second_target == "dodge")
			{
				dodge = dodge + m_second_value;
				if (dodge >= max_dodge)
					dodge = max_dodge;
				else if (dodge <= 0.009)
					dodge = 0.0;
			}
		}

	else if (iterator == 2)
		for (int i = 0; i < Equiped_items.size(); i++)
		{
			Equiped_items[i]->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, m_equipment_slot);

			if (m_first_target == "health")
				health -= m_first_value;
			else if (m_first_target == "attack")
				attack -= m_first_value;
			else if (m_first_target == "defence")
				defence -= m_first_value;
			else if (m_first_target == "dodge")
			{
				dodge = dodge - m_first_value;
				if (dodge >= max_dodge)
					dodge = max_dodge;
				else if (dodge <= 0.009)
					dodge = 0;
			}

			if (m_second_target == "health")
				health -= m_second_value;
			else if (m_second_target == "attack")
				attack -= m_second_value;
			else if (m_second_target == "defence")
				defence -= m_second_value;
			else if (m_second_target == "dodge")
			{
				dodge = dodge - m_second_value;
				if (dodge >= max_dodge)
					dodge = max_dodge;
				else if (dodge <= 0.009)
					dodge = 0.0;
			}
		}
}

void Hero::Accumalate_weapons(int iterator)
{
	//1 to accumalate
	//2 to retract
	//Consumable m_consumable = List_of_consumable_items[iterator].first;
	std::string m_first_target, m_second_target;
	double m_first_value, m_second_value;
	int m_slot_size;

	if (iterator == 1)
		for (int i = 0; i < Equiped_weapons.size(); i++)
		{
			Equiped_weapons[i]->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, m_slot_size);

			if (m_first_target == "health")
				health += m_first_value;
			else if (m_first_target == "attack")
				attack += m_first_value;
			else if (m_first_target == "defence")
				defence += m_first_value;
			else if (m_first_target == "dodge")
			{
				dodge += m_first_value;
				if (dodge > max_dodge)
					dodge = max_dodge;
				if (dodge <= 0.009)
					dodge = 0;
			}

			if (m_second_target == "health")
				health += m_second_value;
			else if (m_second_target == "attack")
				attack += m_second_value;
			else if (m_second_target == "defence")
				defence += m_second_value;
			else if (m_second_target == "dodge")
			{
				dodge += m_second_value;
				if (dodge > max_dodge)
					dodge = max_dodge;
				if (dodge <= 0.009)
					dodge = 0;
			}
		}
	else if (iterator == 2)
		for (int i = 0; i < Equiped_weapons.size(); i++)
		{
			Equiped_weapons[i]->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, m_slot_size);

			if (m_first_target == "health")
				health -= m_first_value;
			else if (m_first_target == "attack")
				attack -= m_first_value;
			else if (m_first_target == "defence")
				defence -= m_first_value;
			else if (m_first_target == "dodge")
			{
				dodge -= m_first_value;
				if (dodge > max_dodge)
					dodge = max_dodge;
				if (dodge <= 0.009)
					dodge = 0;
			}

			if (m_second_target == "health")
				health -= m_second_value;
			else if (m_second_target == "attack")
				attack -= m_second_value;
			else if (m_second_target == "defence")
				defence -= m_second_value;
			else if (m_second_target == "dodge")
			{
				dodge -= m_second_value;
				if (dodge > max_dodge)
					dodge = max_dodge;
				if (dodge <= 0.009)
					dodge = 0;
			}
		}
}

Hero::Hero()
{
	name = "Sir Arthur Bloodstone";
	description = "Knight of the realm that serves the Queen";
	health = 30;
	attack = 2;
	defence = 0;
	dodge = 0.20;
	attacks = 1;

	//Initial weapons

	Equiped_weapons.push_back(new Weapon("Sword", "A common sword", "attack", 5, "dodge", -0.04, 1));
	Equiped_weapons.push_back(new Weapon("Shield", "A metal plate, protects you from damage", "defence", 4, "dodge", -0.04, 1));

	//Initial armour
	Equiped_items.push_back(new Wearable("Steel helmet", "A simple helmet, protects the skull", "defence", 2, "dodge", -0.02, 1));
	Equiped_items.push_back(new Wearable("Steel armour", "A set of steel armour, very shinny", "defence", 4, "dodge", -0.2, 3));
	Equiped_items.push_back(new Wearable("Steel gauntlets", "A pair of steel gauntlets", "defence", 2, "dodge", -0.02, 4));
	Equiped_items.push_back(new Wearable("Steel boots", "A pair of steel boots", "defence", 2, "dodge", -0.03, 6));

	Accumalate_equipment(1);
	Accumalate_weapons(1);
};

void Hero::Equip_wearable(int iterator)
{
	//Wearable m_wearable = List_of_wearable_items[iterator].first;
	std::string m_first_target, m_second_target;
	double m_first_value, m_second_value;
	int m_equipment_slot, n_equipment_slot;
	int flag = 0;

	Inventory[iterator].first->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, n_equipment_slot);

	for (int i = 0; i < Equiped_items.size(); i++)
	{
		Equiped_items[i]->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, m_equipment_slot);
		if (m_equipment_slot == n_equipment_slot)
		{
			flag = 0;
			std::cout << std::endl << "Slot is taken" << std::endl;
			break;
		}
		else
			flag = 1;
	}

	if (flag == 1)
	{
		Accumalate_equipment(2);
		Equiped_items.push_back(Inventory[iterator].first);
		Accumalate_equipment(1);

		if (Inventory[iterator].second == 1)
			Inventory.erase(Inventory.begin() + iterator);
		else
			Inventory[iterator].second--;
	}
}

void Hero::Unequip_wearable(int iterator)
{
	Accumalate_equipment(2);

	Add_item_to_inventory(Equiped_items[iterator]);
	Equiped_items.erase(Equiped_items.begin() + iterator);

	Accumalate_equipment(1);
}

void Hero::Equip_weapon(int iterator)
{
	std::string m_first_target, m_second_target;
	double m_first_value, m_second_value;
	int m_slot_size, n_slot_size;
	int flag = 0;
	int free_hands = hands;

	Inventory[iterator].first->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, n_slot_size);

	for (int i = 0; i < Equiped_weapons.size(); i++)
	{
		Equiped_weapons[i]->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, m_slot_size);
		free_hands -= m_slot_size;
	}
	std::cout << free_hands << std::endl;
	if (n_slot_size <= free_hands)
	{	
		Accumalate_weapons(2);
		Equiped_weapons.push_back(Inventory[iterator].first);
		Accumalate_weapons(1);

		if (Inventory[iterator].second == 1)
			Inventory.erase(Inventory.begin() + iterator);
		else
			Inventory[iterator].second--;
	}
	else
		std::cout << std::endl << "Not enough hands to wield that" << std::endl;
}

void Hero::Unequip_weapon(int iterator)
{
	Accumalate_weapons(2);

	Add_item_to_inventory(Equiped_weapons[iterator]);
	Equiped_weapons.erase(Equiped_weapons.begin() + iterator);

	Accumalate_weapons(1);
}


void Hero::Consume_consumable(int iterator)
{
	//Item* m_consumable = Inventory[iterator].first;
	std::string m_first_target, m_second_target;
	double m_first_value, m_second_value;
	int uses;

	Inventory[iterator].first->Get_affects(m_first_target, m_first_value, m_second_target, m_second_value, uses);

	if (m_first_target == "health")
		health += m_first_value;
	else if (m_first_target == "attack")
		attack += m_first_value;
	else if (m_first_target == "defence")
		defence += m_first_value;
	else if (m_first_target == "dodge")
		dodge += m_first_value;

	if (m_second_target == "health")
		health += m_second_value;
	else if (m_second_target == "attack")
		attack += m_second_value;
	else if (m_second_target == "defence")
		defence += m_second_value;
	else if (m_second_target == "dodge")
		dodge += m_second_value;

	uses -= 1;
	if (uses <= 0)
	{
		if (Inventory[iterator].second == 1)
		{
			delete Inventory[iterator].first;
			Inventory.erase(Inventory.begin() + iterator);
		}
		else
			Inventory[iterator].second--;
	}
}

int Hero::Get_item(int item_name)
{
	for (int i = 0; i < Inventory.size(); i++)
	{
		if (i == item_name)
			return i;
	}
		return -1;	
}

int Hero::Get_wearable(int item_name)
{
	for (int i = 0; i < Equiped_items.size(); i++)
	{
		if (i == item_name)
			return i;
	}
	return -1;
}

int Hero::Get_weapon(int item_name)
{
	for (int i = 0; i < Equiped_weapons.size(); i++)
	{
		if (i == item_name)
			return i;
	}
	return -1;
}

void Hero::Add_item_to_inventory(Item* m_item)
{
	int flag = 0;
	if (Inventory.size() > 0)
	{
		std::string m_name = m_item->Get_name();
		for (int i = 0; i < Inventory.size(); i++)
		{
			if (Inventory[i].first->Get_name() == m_name)
			{
				Inventory[i].second++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			Inventory.push_back(std::pair<Item*, int>(m_item, 1));
		}
	}
	else
		Inventory.push_back(std::pair<Item*, int>(m_item, 1));
}


void Hero::Display_inventory()
{
	std::cout << "---------------Inventory---------------" << std::endl << std::endl;

	if (Inventory.size() > 0)
	{
		std::cout << "Number / Name / Amount" << std::endl << std::endl;

		for (int i = 0; i < Inventory.size(); i++)
		{
			std::cout << i + 1 << ": " << Inventory[i].first->Get_name() << " " << Inventory[i].second << std::endl;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "You have nothing" << std::endl << std::endl;

	std::cout << "---------------Inventory---------------" << std::endl << std::endl;
}


void Hero::Display_stats()
{

	std::cout << "---------------Stats---------------" << std::endl << std::endl;
	std::cout << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Description: " << description << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "Attack: " << attack << std::endl;
	std::cout << "Defence: " << defence << std::endl;
	std::cout << "Dodge: " << dodge << std::endl;
	std::cout << std::endl;
	std::cout << "---------------Stats---------------" << std::endl << std::endl;
}


void Hero::Display_equipment()
{
	std::cout << "---------------Equipment---------------" << std::endl << std::endl;
	//std::cout << "This is what you have equiped:" << std::endl << std::endl;

	if (Equiped_items.size() > 0)
	{
		std::cout << "This is what you're weaing:" << std::endl << std::endl;
		for (int i = 0; i < Equiped_items.size(); i++)
		{
			std::cout << i + 1 << ": " << Equiped_items[i]->Get_name() << std::endl;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "You're wearing nothing" << std::endl;
		std::cout << std::endl;
	}

	if (Equiped_weapons.size() > 0)
	{
		std::cout << "This is what you're wielding:" << std::endl << std::endl;
		for (int i = 0; i < Equiped_weapons.size(); i++)
		{
			std::cout << i + 1 << ": " << Equiped_weapons[i]->Get_name() << std::endl;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "You're not wielding anything" << std::endl;
		std::cout << std::endl;
	}

	std::cout << "---------------Equipment---------------" << std::endl << std::endl;
}

int Hero::Get_health()
{
	return health;
}

int Hero::Get_inventory()
{
	return Inventory.size();
}

void Hero::Input()
{
	std::cout << "It's a " << name << std::endl;
}

std::string Hero::Get_name()
{
	return name;
}

void Hero::Examine()
{
	std::cout << description << std::endl;
}

//void Hero::Equip_item()
//{
//	if (m_slot == "empty")
//		m_slot = m_item;
//}