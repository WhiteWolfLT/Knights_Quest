#include "Hero.h"

Hero::Hero()
{
	name = "Sir Arthur Bloodstone";
	description = "Knight of the realm that serves the Queen";

	Consumable generated_item;
	std::pair<Consumable, int> generated_pair(generated_item, 1);
	List_of_consumable_items.push_back(generated_pair);
};

void Hero::Add_weapon_to_inventory(Weapon m_weapon)
{
	int flag = 0;
	if (List_of_weapon_items.size() > 0)
	{
		std::string m_name = m_weapon.Get_name();
		for (int i = 0; i < List_of_weapon_items.size(); i++)
		{
			if (List_of_weapon_items[i].first.Get_name() == m_name)
			{
				List_of_weapon_items[i].second++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			std::pair<Weapon, int> generated_pair(m_weapon, 1);
			List_of_weapon_items.push_back(generated_pair);
		}
	}
	else
	{
		std::pair<Weapon, int> generated_pair(m_weapon, 1);
		List_of_weapon_items.push_back(generated_pair);
	}
}

void Hero::Add_wearable_to_inventory(Wearable m_wearable)
{
	int flag = 0;
	if (List_of_wearable_items.size() > 0)
	{
		std::string m_name = m_wearable.Get_name();
		for (int i = 0; i < List_of_wearable_items.size(); i++)
		{
			if (List_of_wearable_items[i].first.Get_name() == m_name)
			{
				List_of_wearable_items[i].second++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			std::pair<Wearable, int> generated_pair(m_wearable, 1);
			List_of_wearable_items.push_back(generated_pair);
		}
	}
	else
	{
		std::pair<Wearable, int> generated_pair(m_wearable, 1);
		List_of_wearable_items.push_back(generated_pair);
	}
}

void Hero::Add_consumable_to_inventory(Consumable m_consumable)
{
	int flag = 0;
	if (List_of_consumable_items.size() > 0)
	{
		std::string m_name = m_consumable.Get_name();
		for (int i = 0; i < List_of_weapon_items.size(); i++)
		{
			if (List_of_consumable_items[i].first.Get_name() == m_name)
			{
				List_of_consumable_items[i].second++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			std::pair<Consumable, int> generated_pair(m_consumable, 1);
			List_of_consumable_items.push_back(generated_pair);
		}
	}
	else
	{
		std::pair<Consumable, int> generated_pair(m_consumable, 1);
		List_of_consumable_items.push_back(generated_pair);
	}
}

void Hero::Display_inventory()
{

	std::cout << "These are the items you have :" << std::endl << std::endl;
	std::cout << "Weapons :" << std::endl << std::endl;
	
	if (List_of_weapon_items.size() > 0)
		for (int i = 0; i < List_of_weapon_items.size(); i++)
		{
			std::cout << "You have "<< List_of_weapon_items[i].second<<" ";
			List_of_weapon_items[i].first.Get_name();		
		}
	else
		std::cout << "You have no weapons" << std::endl;

	std::cout << std::endl;

	std::cout << "Armour :" << std::endl << std::endl;
	
	if (List_of_wearable_items.size() > 0)
		for (int i = 0; i < List_of_wearable_items.size(); i++)
		{
			std::cout << "You have " << List_of_wearable_items[i].second << " ";
			List_of_wearable_items[i].first.Get_name();
		}
	else
		std::cout << "You have no gear" << std::endl;

	std::cout << std::endl;

	std::cout << "Consumables :" << std::endl << std::endl;
	
	if (List_of_consumable_items.size() > 0)
		for (int i = 0; i < List_of_consumable_items.size(); i++)
		{
			std::cout << "You have " << List_of_consumable_items[i].second << " ";
			List_of_consumable_items[i].first.Get_name();
		}
	else
		std::cout << "You have no consumables" << std::endl;

	std::cout << std::endl;
}

void Hero::Input()
{
	std::cout << "It's a " << name << std::endl;
}

std::string Hero::Get_name()
{
	std::cout << name << std::endl;
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