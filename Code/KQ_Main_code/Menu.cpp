#include "Menu.h"

Menu::Menu(std::string m_name, std::string m_description, std::vector<std::string> m_list_of_options)
{
	name = m_name;
	description = m_description;
	List_of_options = m_list_of_options;
}

void Menu::Display_Menu()
{
	std::cout << description << std::endl << std::endl;
	for (int i = 0; i < List_of_options.size(); i++)
	{
		std::cout << List_of_options[i] << std::endl;
	}
}