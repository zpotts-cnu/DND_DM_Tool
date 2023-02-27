#include "DND_Character.h"

DND_Character::DND_Character(json::object_t character_data) {
	character_data.at("Name").get_to(this->character_name);
	std::string race = character_data.at("Race");
	this->character_race;
}

DND_Character::~DND_Character() {

}

std::string DND_Character::getName() {
	return "test";
}

std::string DND_Character::getRace() {
	return "test";
}

int DND_Character::getMaxHP() {
	return 0;
}

int DND_Character::getCurrentHP() {
	return 0;
}

int DND_Character::getArmorClass() {
	return 0;
}

int DND_Character::getStat(DND_STAT stat) {
	return 0;
}
