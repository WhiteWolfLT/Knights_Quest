#pragma once
#include "Class_file.h"
#include <string>
class Wearable : protected Item
{
private:
	std::string equipment_slot;
};