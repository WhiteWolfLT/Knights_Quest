#pragma once
#include "Entity.h"

class Hero : protected Entity
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
    std::vector<Consumable> Equiped_Items;

public:
    Hero();

    void Display_inventory();   
    void Add_weapon_to_inventory(Weapon);
    void Add_wearable_to_inventory(Wearable);
    void Add_consumable_to_inventory(Consumable);
    void Equip_wearable();
    void Unequip_wearable(std::string m_slot);

    void Input() override;
    std::string Get_name() override;
    void Examine() override;
    //void Equip_item();
    //void Acclimation();

    
};