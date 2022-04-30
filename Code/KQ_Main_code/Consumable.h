#pragma once
#include "Item.h"
//#include <string>
class Consumable : protected Item
{
private:
	std::string affect_type;
	int uses;

public:
	Consumable(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, int m_uses);

	Consumable(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, std::string m_second_target, double m_second_value, int m_uses);

	Consumable();

	void Input() override;

	std::string Get_name() override;

	void Examine() override;
};