#pragma once
#include "Item.h"

class Consumable : public Item
{
private:
	int uses = 0;

public:
	~Consumable() {};
	Consumable();
	Consumable(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, std::string m_second_target, double m_second_value, int m_uses);

	void Get_affects(std::string &m_first_target, double &m_first_value, std::string &m_second_target, double &m_second_value, int& m_special) override;
	void Examine() override;
};