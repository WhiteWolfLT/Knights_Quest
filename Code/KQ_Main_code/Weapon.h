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

	void Get_name() override;

	void Examine() override;

};