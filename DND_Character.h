#include <string>
#include "constants.h"
#include <map>

#pragma once
class DND_Character {
public:
	DND_Character();
	~DND_Character();
	virtual std::string getName();
	virtual std::string getRace();
	virtual int getStrength();
	virtual int getDexterity();
	virtual int getConstitution();
	virtual int getIntelligence();
	virtual int getWisdom();
	virtual int getCharisma();
protected:
	std::string character_name;
	DND_RACE character_race;
	std::map<DND_STATS, int> character_stats;
};
