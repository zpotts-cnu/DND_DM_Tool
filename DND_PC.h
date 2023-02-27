#include "DND_Character.h"

#pragma once
class DND_PC : DND_Character {
public:
	DND_PC();
	~DND_PC();
	std::string getName();
	std::string getRace();
	std::string getClass();
private:
	std::string pc_name;
	DND_RACE pc_race;
	DND_CLASS pc_class;
};

