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
	int getStrength();
	int getDexterity();
	int getConstitution();
	int getIntelligence();
	int getWisdom();
	int getCharisma();
protected:
	std::string character_name;
	DND_RACE character_race;
	std::map<DND_STATS, int> character_stats;
};
