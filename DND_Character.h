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
	virtual int getStat(DND_STAT stat);
protected:
	std::string character_name;
	DND_RACE character_race;
	std::map<DND_STAT, int> character_stats;
};
