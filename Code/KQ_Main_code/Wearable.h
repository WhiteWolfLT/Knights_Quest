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

	void Get_affects(std::string& m_first_target, double& m_first_value, std::string& m_second_target, double& m_second_value, std::string & m_equipment_slot);

	std::string Get_first_target();
	int Get_first_value();
	std::string Get_second_target();
	int Get_second_value();
};