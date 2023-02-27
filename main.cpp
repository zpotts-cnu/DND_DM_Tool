#include <iostream>
#include <string>
#include <vector>
#include "constants.h"
#include "utilities.h"

int main() {
	std::string filename = "characters.json";
	json file_data = open_json_file(filename);
	auto characters = file_data["PlayerCharacters"];

	std::vector<std::string> skills;

	for (auto &character : characters) {
		character.at("Proficient Skills").get_to(skills);
	}

	for (std::vector<std::string>::iterator it = skills.begin(); it != skills.end(); ++it) {
		std::cout << *it << std::endl;

	return 0;
}