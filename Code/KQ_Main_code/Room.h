#pragma once
#include "Interface.h"
class Room : public Interface
{
protected:
    std::string name;
    std::string input;
    std::vector<std::string> List_of_options;
};
