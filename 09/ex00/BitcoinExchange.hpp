#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

bool fill_db(std::map<std::string, float> &data_base, std::string file, std::string delim);
bool validate_key( std::string key );
bool validate_value(std::string val);
void find_input(std::map<std::string, float> &data_base, std::string file);

#endif