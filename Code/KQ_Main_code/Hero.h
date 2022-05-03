#pragma once
#include "Entity.h"

class Hero : public Entity
{
private:
    //std::vector<std::pair<Item*, int>> Inventory;
    //std::vector<Item*> Equiped_Items;


    //clothes (equiped,empty);
    //clothes equiped[0];
    // map::clothes.insert(pair<std::string, std::string>("left_hand","empty");
    //std::string right_hand = "fist";
    //equiped["head"] = "empty";
    //std::string head = "empty";
    //std::string chest = "empty";
    //std::string feet = "empty";
    //std::string neck = "empty";
    //std::string hands = "empty";
    //std::string finger = "empty";

    std::vector<std::pair<Weapon, int>> List_of_weapon_items;
    std::vector<std::pair<Wearable, int>> List_of_wearable_items;
    std::vector<std::pair<Consumable, int>> List_of_consumable_items;
    std::vector<Wearable> Equiped_items;
    std::vector<Weapon> Equiped_weapons;
    int hands = 2;
    double max_dodge = 0.6;

public:
    Hero();

    void Equip_wearable(int iterator);
    void Unequip_wearable(int iterator);
    void Equip_weapon(int iterator);
    void Unequip_weapon(int iterator);
    void Consume_consumable(int iterator);

    void Add_weapon_to_inventory(Weapon);
    void Add_wearable_to_inventory(Wearable);
    void Add_consumable_to_inventory(Consumable); 
    void Display_inventory(); 
    void Display_stats();
    void Display_equipment();
    void Accumalate_equipment(int iterator);
    void Accumalate_weapons(int iterator);

    int Get_health();

    void Input() override;
    std::string Get_name() override;
    void Examine() override;
    //void Equip_item();
    //void Acclimation();

    
};