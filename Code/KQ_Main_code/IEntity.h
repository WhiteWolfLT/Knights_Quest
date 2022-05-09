#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <time.h>

class IEntity
{
public:
	virtual int Get_health() = 0;
	virtual void Input() = 0;
	virtual std::string Get_name() = 0;
	virtual void Damage(int) = 0;
	virtual void Examine() = 0;
	virtual void Attack(double& m_attack, int m_attacks) = 0;
	virtual void Defend(double& m_defence, double m_dodge) = 0;
};