#include <fstream>
#include <string>
#include "json/single_include/nlohmann/json.hpp"

using json = nlohmann::json;

#pragma once
json open_json_file(std::string filename);