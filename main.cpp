#include <iostream>
#include <fstream>
#include <string>
#include "json/single_include/nlohmann/json.hpp"

using json = nlohmann::json;

json open_json_file(std::string filename) {
	//const char* file = filename.c_str();
	std::ifstream f(filename.c_str());
	json data = json::parse(f);
	return data;
}

int main() {
	std::string filename = "characters.json";
	json file_data = open_json_file(filename);
	std::cout << file_data["Stats"] << std::endl;
	return 0;
}