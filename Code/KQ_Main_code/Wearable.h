#pragma once
#include "Item.h"
//#include "Hero.h"
class Wearable : public Item
{
private:
	int equipment_slot = 0;

public:
	~Wearable() {};
	Wearable();
	Wearable(std::string m_name, std::string m_description, std::string first_target, double first_value, std::string second_target, double second_value, int equipment_slot);

	void Get_affects(std::string& m_first_target, double& m_first_value, std::string& m_second_target, double& m_second_value, int& m_special) override;
	void Examine() override;
	//void Utilize(Hero, Item*);
};