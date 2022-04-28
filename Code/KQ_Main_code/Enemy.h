#pragma once
#include "Entity.h"
#include "Item.h"
#include "Game_logic.h"
#include <string>
#include <vector>
class Enemy : public Entity
{
public:
	std::vector<Item*> Drops;
	Enemy(std::string m_name, std::string m_description, int m_health, int m_attack, int m_defence, double m_dodge, int m_attacks);
	
};