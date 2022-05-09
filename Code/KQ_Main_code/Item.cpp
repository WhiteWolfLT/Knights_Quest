#include "Item.h"

Item::Item(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, std::string m_second_target, double m_second_value)
{
    name = m_name;
    description = m_description;
    first_target = m_first_target;
    first_value = m_first_value;
    second_target = m_second_target;
    second_value = m_second_value;
}

std::string Item::Get_name()
{
    return name;
}

void Item::Examine()
{
	std::cout << description << std::endl;
}