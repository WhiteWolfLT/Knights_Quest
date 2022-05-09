#pragma once
#include "Entity.h"

class Hero : public Entity
{
private:
    std::vector<std::pair<Item*, int>> Inventory;
    std::vector<Item*> Equiped_items;
    std::vector<Item*> Equiped_weapons;
    int hands = 2;
    double max_dodge = 0.6;

public:
    Hero();

    void Equip_wearable(int);
    void Unequip_wearable(int);
    void Equip_weapon(int);
    void Unequip_weapon(int);
    void Consume_consumable(int);
    int Get_item(int);
    int Get_wearable(int);
    int Get_weapon(int);

    void Add_item_to_inventory(Item*);
    void Display_inventory(); 
    void Display_stats();
    void Display_equipment();
    void Accumalate_equipment(int iterator);
    void Accumalate_weapons(int iterator);

    int Get_health() override;
    int Get_inventory();
    void Input() override;
    std::string Get_name() override;
    void Examine() override;  
};