#pragma once
#include "IItem.h"
class Item : public IItem
{
protected:
    std::string name = "";
    std::string description = "";
    std::string first_target = "";
    double first_value = 0;
    std::string second_target = "";
    double second_value = 0;

public:
    virtual ~Item() {};

    Item() {};
    Item(std::string m_name, std::string m_description, std::string m_first_target, double m_first_value, std::string m_second_target, double m_second_value);
    std::string Get_name() override;
    virtual void Examine() = 0;
    virtual void Get_affects(std::string& m_first_target, double& m_first_value, std::string& m_second_target, double& m_second_value, int& m_special) = 0;
    //virtual void Utilize(Hero, Item*) = 0;
};