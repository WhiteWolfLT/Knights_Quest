#pragma once
#include "Interface.h"
class Item : public Interface
{
public:
    std::string name;
    std::string description;

    std::string first_target;
    double first_value;

    std::string second_target;
    double second_value;

    //void Get_affects() override;
};