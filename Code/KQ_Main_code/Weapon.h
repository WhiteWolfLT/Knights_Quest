#pragma once
#include "Item.h"
//#include "Hero.h"
//#include <string>
class Weapon : public Item
{
private:
	int slot_size = 0;

public:
	~Weapon() {};
	Weapon();
	Weapon(std::string m_name, std::string m_description, std::string first_target, double first_value, std::string second_target, double second_value, int slot_size);
	void Get_affects(std::string& m_first_target, double& m_first_value, std::string& m_second_target, double& m_second_value, int& m_special);
	void Examine() override;
};