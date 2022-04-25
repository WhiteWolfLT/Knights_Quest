#pragma once
#include "Class_file.h"
#include <string>
class Consumable : protected Item
{
private:
	std::string affect_type;
	int use_amount;
};