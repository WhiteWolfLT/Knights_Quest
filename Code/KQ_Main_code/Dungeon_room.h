#pragma once
#include "Class_file.h"
class Dungeon_room: public Room
{
public:
    std::vector<std::string> List_of_options;
    std::vector<std::string> List_of_enemies;
    std::vector<std::string> List_of_items;
};