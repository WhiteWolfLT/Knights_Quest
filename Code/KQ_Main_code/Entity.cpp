#include "Entity.h"
void Entity::Damage(int m_health)
{
	health -= m_health;
}
void Entity::Attack(double& m_attack, int m_attacks)
{
	m_attack = attack;
	m_attacks = attacks;
}
void Entity::Defend(double& m_defence, double m_dodge)
{
	m_defence = defence;
	m_dodge = dodge;
}