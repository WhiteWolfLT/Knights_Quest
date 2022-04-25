#pragma once
#include <string>
#include <vector>

class Entity
{
public:
    std::string name;
    std::string description;
    //std::string entity_class;
    int health;
    int attack;
    int defence;
    double dodge;
};

class Item
{
public:
    std::string name;
    std::string description;

    int affects;

    std::string first_target;
    int first_value;

    std::string second_target;
    int second_value;
};

class Room
{
public:
    std::string name;
    std::string room_message;
    std::string input;
};


class Game_Logic
{
};