#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <time.h>
class Interface
{
protected:

	virtual void Input() = 0;

	virtual void Get_name() = 0;

	virtual void Examine() = 0;
	////entity functions
	//virtual void Attack() = 0;
	//virtual void Equip_Item() = 0;
	//virtual void Examine() = 0;
	//virtual void Consume() = 0;
	//virtual void Acclimation() = 0;
	//
	////item functions
	//virtual void Affect() = 0;
	//virtual void Get_affects() = 0;
	//virtual void Get_affect_amout() = 0;
	//
	//virtual void Death() = 0;
};