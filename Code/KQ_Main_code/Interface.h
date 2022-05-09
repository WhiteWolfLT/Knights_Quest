#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <time.h>

class Interface
{
public:
	virtual void Input() = 0;
	virtual std::string Get_name() = 0;
	virtual void Examine() = 0;
};