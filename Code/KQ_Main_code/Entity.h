#pragma once
#include "IEntity.h"

#include "Item.h"
#include "Consumable.h"
#include "Weapon.h"
#include "Wearable.h"
class Entity : public IEntity
{
protected:
    std::string name;
    std::string description;
    double health = 0;
    double attack = 0;
    double defence = 0;
    double dodge = 0;
	int attacks = 0;

public:
    void Damage(int);
    void Attack(double& m_attack, int m_attacks);
    void Defend(double& m_defence, double m_dodge);
};