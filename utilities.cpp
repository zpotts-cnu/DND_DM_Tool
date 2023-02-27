#include "utilities.h"

json open_json_file(std::string filename) {
	std::ifstream f(filename.c_str());
	json data = json::parse(f);
	return data;
}

DND_RACE convert_str_to_race(const char* race) {
	if (race == "Dwarf") return DWARF;
	else if (race == "Elf") return ELF;
}
