#pragma once

#include <string>
#include <map>
#include "constants.h"
#include "utilities.h"

class DND_Character {
public:
	DND_Character(json::object_t character_data);
	~DND_Character();
	virtual std::string getName();
	virtual std::string getRace();
	virtual int getMaxHP();
	virtual int getCurrentHP();
	virtual int getArmorClass();
	virtual int getStat(DND_STAT stat);
protected:
	std::string character_name;
	DND_RACE character_race;
	int max_hp;
	int current_hp;
	int ac;
	std::map<DND_STAT, int> character_stats;
};
