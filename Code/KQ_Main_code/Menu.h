#pragma once
#include "Room.h"
//#include <string>
class Menu : public Room
{
private:
	std::string description;
public:
	Menu(std::string m_name, std::string m_description, std::vector<std::string> m_list_of_options);
	void Do_funtion(std::string m_action);
	void Display_Menu();
};