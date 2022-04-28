#pragma once
#include "Item.h"
#include <string>
class Wearable : protected Item
{
private:
	std::string equipment_slot;
	Wearable(std::string m_name, std::string m_description, int affects, std::string first_target, int first_value, std::string second_target, int second_value, std::string equipment_slot);

	void Input() override;

	void Get_name() override;

	void Examine() override;

};