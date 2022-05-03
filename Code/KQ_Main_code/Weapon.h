#pragma once
#include "Item.h"
//#include <string>
class Weapon : protected Item
{
private:

	int slot_size;

public:

	Weapon(std::string m_name, std::string m_description, std::string first_target, double first_value, std::string second_target, double second_value, int slot_size);

	Weapon();

	void Input() override;

	std::string Get_name() override;

	void Examine() override;

	void Get_affects(std::string& m_first_target, double& m_first_value, std::string& m_second_target, double& m_second_value, int& m_slot_size);

	std::string Get_first_target();
	int Get_first_value();
	std::string Get_second_target();
	int Get_second_value();

};