#include "utilities.h"

json open_json_file(std::string filename) {
	std::ifstream f(filename.c_str());
	json data = json::parse(f);
	return data;
}

DND_RACE convert_str_to_race(const char* race) {
	if (race == "Dwarf") return DWARF;
	else if (race == "Elf") return ELF;
	else if (race == "Halfling") return HALFLING;
	else if (race == "Human") return HUMAN;
	else if (race == "Dragonborn") return DRAGONBORN;
	else if (race == "Gnome") return GNOME;
	else if (race == "Half-Elf") return HALF_ELF;
	else if (race == "Half-Orc") return HALF_ORC;
	else if (race == "Tiefling") return TIEFLING;
	else return NO_RACE;
}

DND_CLASS convert_str_to_class(const char* class_str) {
	if (class_str == "Barbarian") return BARBARIAN;
	else if (class_str == "Bard") return BARD;
	else if (class_str == "Cleric") return CLERIC;
	else if (class_str == "Druid") return DRUID;
	else if (class_str == "Fighter") return FIGHTER;
	else if (class_str == "Monk") return MONK;
	else if (class_str == "Paladin") return PALADIN;
	else if (class_str == "Ranger") return RANGER;
	else if (class_str == "Rogue") return ROGUE;
	else if (class_str == "Sorcerer") return SORCERER;
	else if (class_str == "Warlock") return WARLOCK;
	else if (class_str == "Wizard") return WIZARD;
	else return NO_CLASS;
}

DND_STAT convert_str_to_stat(const char* stat) {
	if (stat == "Strength") return STRENGTH;
	else if (stat == "Dexterity") return DEXTERITY;
	else if (stat == "Constitution") return CONSTITUTION;
	else if (stat == "Intelligence") return INTELLIGENCE;
	else if (stat == "Wisdom") return WISDOM;
	else if (stat == "Charisma") return CHARISMA;
	else return NO_STAT;
}

DND_SKILL convert_str_to_skill(const char* skill) {
	if (skill == "Acrobatics") return ACROBATICS;
	else if (skill == "Animal Handling") return ANIMAL_HANDLING;
	else if (skill == "Arcana") return ARCANA;
	else if (skill == "Athletics") return ATHLETICS;
	else if (skill == "Deception") return DECEPTION;
	else if (skill == "History") return HISTORY;
	else if (skill == "Insight") return INSIGHT;
	else if (skill == "Intimidation") return INTIMIDATION;
	else if (skill == "Investigation") return INVESTIGATION;
	else if (skill == "Medicine") return MEDICINE;
	else if (skill == "Nature") return NATURE;
	else if (skill == "Perception") return PERCEPTION;
	else if (skill == "Performance") return PERFORMANCE;
	else if (skill == "Persuasion") return PERSUASION;
	else if (skill == "Religion") return RELIGION;
	else if (skill == "Sleight of Hand") return SLEIGHT_OF_HAND;
	else if (skill == "Stealth") return STEALTH;
	else if (skill == "Survival") return SURVIVAL;
	else return NO_SKILL;
}
