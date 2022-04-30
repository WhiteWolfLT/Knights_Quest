#pragma once
#include "Entity.h"
class Enemy : public Entity
{
private:
	std::vector<Weapon> List_of_weapon_items;
	std::vector<Wearable> List_of_wearable_items;
	std::vector<Consumable> List_of_consumable_items;
public:
	Enemy(std::string m_name, std::string m_description, int m_health, int m_attack, int m_defence, double m_dodge, int m_attacks);
	Enemy();
	
	void Input() override;

	std::string Get_name() override;

	void Examine() override;
};