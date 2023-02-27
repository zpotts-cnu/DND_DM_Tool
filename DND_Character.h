#include <string>
#include "constants.h"
#include <map>

#pragma once
class DND_Character {
public:
	DND_Character();
	~DND_Character();
	std::string getName();
	std::string getRace();
	std::string getClass();
private:
	std::string pc_name;
	DND_RACE pc_race;
	DND_CLASS pc_class;
	std::map<DND_STATS, int> pc_stats[NUM_STATS];
};
