#pragma once
#include "Item.h"
//#include <string>
class Weapon : protected Item
{
private:
	int slot_size;
	Weapon(std::string m_name, std::string m_description, int affects, std::string first_target, int first_value, std::string second_target, int second_value, int slot_size);
};