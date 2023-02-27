#include <iostream>
#include <fstream>
#include <string>
#include "json/single_include/nlohmann/json.hpp"
#include "constants.h"

using json = nlohmann::json;

json open_json_file(std::string filename) {
	//const char* file = filename.c_str();
	std::ifstream f(filename.c_str());
	json data = json::parse(f);
	return data;
}

int main() {
	//std::string filename = "characters.json";
	//json file_data = open_json_file(filename);
	//decltype(file_data["Characters"]) character = file_data["Characters"];
	//std::cout << character << std::endl;
	//std::cout << decltype(filename) << std::endl;
	for (int i = 0; i < NUM_STATS; i++) {
		DND_STATS stat = (DND_STATS)i;
		switch (stat)
		{
		case STRENGTH:
			std::cout << "Strength" << std::endl;
			break;
		case DEXTERITY:
			std::cout << "Dexterity" << std::endl;
			break;
		case CONSTITUTION:
			std::cout << "Constitution" << std::endl;
			break;
		case INTELLIGENCE:
			std::cout << "Intelligence" << std::endl;
			break;
		case WISDOM:
			std::cout << "Wisdom" << std::endl;
			break;
		case CHARISMA:
			std::cout << "Charisma" << std::endl;
			break;
		default:
			break;
		}
	}
	return 0;
}