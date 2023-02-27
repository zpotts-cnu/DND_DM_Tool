#include "DND_Character.h"

#pragma once
class DND_PC : DND_Character {
public:
	DND_PC();
	~DND_PC();
	// Base Class Methods
	std::string getName();
	std::string getRace();
	int getMaxHP();
	int getCurrentHP();
	int getArmorClass();
	int getStat(DND_STAT stat);
	// PC Class Methods
	std::string getClass();
	int getLevel();
	int getProfBonus();
private:
	DND_CLASS pc_class;
	int pc_level;
	int pc_proficiency_bonus;
	DND_SKILL proficient_skills[NUM_SKILLS];
};

