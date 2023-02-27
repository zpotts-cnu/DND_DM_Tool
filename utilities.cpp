#include "utilities.h"

using json = nlohmann::json;

json open_json_file(std::string filename) {
	//const char* file = filename.c_str();
	std::ifstream f(filename.c_str());
	json data = json::parse(f);
	return data;
}