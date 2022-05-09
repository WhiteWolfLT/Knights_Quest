#pragma once
#include "Entity.h"

class Enemy : public Entity
{
private:
	std::vector<Item*> Inventory;
public:
	Enemy();
	Enemy(std::string m_name, std::string m_description, int m_health, int m_attack, int m_defence, double m_dodge, int m_attacks);

	int Get_health() override;
	void Transfer_items(std::vector <Item*> & m_vector);
	void Input() override;
	std::string Get_name() override;
	void Examine() override;

};