#pragma once
#include "Class_file.h"
#include <string>
#include <vector>
class Enemy : protected Entity
{
private:
	std::vector<std::string> Drops;
};