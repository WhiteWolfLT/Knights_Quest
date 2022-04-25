#pragma once
#include "Class_file.h"
#include <string>
#include <vector>
class Hero : protected Entity
{
private:
    std::vector<std::string> Inventory;
    std::string left_hand = "fist";
    std::string right_hand = "fist";
    std::string head = "empty";
    std::string chest = "empty";
    std::string feet = "empty";
    std::string neck = "empty";
    std::string hands = "empty";
    std::string finger = "empty";
};