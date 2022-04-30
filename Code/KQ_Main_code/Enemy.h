#pragma once
#include "Entity.h"
class Enemy : public Entity
{
public:
	Enemy(std::string m_name, std::string m_description, int m_health, int m_attack, int m_defence, double m_dodge, int m_attacks);
	Enemy();
	
	void Input() override;

	void Get_name() override;

	void Examine() override;
};