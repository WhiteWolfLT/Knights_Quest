#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <time.h>

class IItem
{
public:
	virtual std::string Get_name() = 0;
	virtual void Examine() = 0;
};