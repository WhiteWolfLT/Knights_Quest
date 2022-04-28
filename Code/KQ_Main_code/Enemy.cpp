#include "Enemy.h"

Enemy::Enemy(std::string m_name, std::string m_description, int m_health, int m_attack, int m_defence, double m_dodge, int m_attacks)
{
	name = m_name;
	description = m_description;
	health = m_health;
	attack = m_attack;
	defence = m_defence;
	dodge = m_dodge;
	attacks = m_attack;
}

void Enemy::Input()
{
	std::cout << "It's a " << name << std::endl;
}

void Enemy::Get_name()
{
	std::cout << name << std::endl;
}

void Enemy::Examine()
{
	std::cout << description << std::endl;
}