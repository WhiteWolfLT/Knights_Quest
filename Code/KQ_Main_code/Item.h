#pragma once
#include "Interface.h"
class Item : public Interface
{
public:
    std::string name;
    std::string description;

    int affects;

    std::string first_target;
    int first_value;

    std::string second_target;
    int second_value;

    //void Get_affects() override;
};