#include "utilities.h"

json open_json_file(std::string filename) {
	std::ifstream f(filename.c_str());
	json data = json::parse(f);
	return data;
}
