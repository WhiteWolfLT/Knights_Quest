#pragma once
#include "Item.h"
#include <string>
class Wearable : protected Item
{
private:
	std::string equipment_slot;

public:

	Wearable(std::string m_name, std::string m_description, std::string first_target, double first_value, std::string second_target, double second_value, std::string equipment_slot);

	Wearable();

	std::string Get_slot();

	void Input() override;

	std::string Get_name() override;

	void Examine() override;

};