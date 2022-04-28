#pragma once
#include "Item.h"
//#include <string>
class Consumable : protected Item
{
private:
	std::string affect_type;
	int use_amount;
	Consumable(std::string m_name, std::string m_description, int affects, std::string first_target, int first_value, std::string second_target, int second_value);

	void Input() override;

	void Get_name() override;

	void Examine() override;
};