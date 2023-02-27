#pragma once

#include <fstream>
#include <string>
#include "json/single_include/nlohmann/json.hpp"
#include "constants.h"

using json = nlohmann::json;

json open_json_file(std::string filename);

DND_RACE convert_str_to_race(const char* race);

DND_CLASS convert_str_to_class(const char* class_str);

DND_STAT convert_str_to_stat(const char* stat);

DND_SKILL convert_str_to_skill(const char* skill);
