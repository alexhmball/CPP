#include "BitcoinExchange.hpp"

bool fill_db(std::map<std::string, float> &data_base, std::string file, std::string delim) {
	std::string tmp;
	std::string key;
	std::string tmp_val;
	float value;
	std::fstream data;

	data.open(&file[0]);
	if (!data.is_open()) {
		std::cerr << "couldn't open database\n";
		return false;
	}
	std::getline(data, tmp);
	while (std::getline(data, tmp)) {
		key = tmp.substr(0, tmp.find(delim));
		tmp_val = tmp.substr(tmp.find(delim) + 1, tmp.length());
		std::istringstream iss (tmp_val);

		iss >> value;
		data_base.insert(std::pair<std::string, float>(key, value));
	}
	return true;
}

bool calculate_leapyear( struct tm tm ) {
	float y4 = tm.tm_year / 4.0;
	float y100 = tm.tm_year / 100.0;
	float y400 = tm.tm_year / 400.0;

	if (tm.tm_mon == 2 && tm.tm_mday == 29) {
		if (y4 - floor(y4) == 0.0) {
			if (y100 - floor(y100) == 0.0) {
				if (y400 - floor(y400) != 0.0)
					return false;
				return true;
			}
			if (y400 - floor(y400) != 0.0)
				return true;
			return false;
		}
		return false;
	}
	return true;
}

bool validate_key( std::string key ) {
	struct tm tm;
	if (!strptime(key.c_str(), "%Y-%m-%d", &tm))
		return false;
	tm.tm_year += 1900;
	if (tm.tm_year < 2009)
		return false;
	tm.tm_mon += 1;
	if (tm.tm_mon < 8 && tm.tm_mon % 2 != 0 && tm.tm_mday > 31)
		return false;
	if (tm.tm_mon >= 8 && tm.tm_mon % 2 == 0 && tm.tm_mday > 31)
		return false;
	if (tm.tm_mon < 8 && tm.tm_mon % 2 == 0 && tm.tm_mday > 30)
		return false;
	if (tm.tm_mon >= 8 && tm.tm_mon % 2 != 0 && tm.tm_mday > 31)
		return false;
	if (tm.tm_mon == 2 && tm.tm_mday > 29)
		return false;
	if (!calculate_leapyear(tm))
		return false;
	return true;
}

bool validate_value(std::string val) {
	try {
		val = val.substr(val.find_first_not_of(" "), val.find_last_not_of(" "));
	} catch (std::exception &e) {
		return false;
	}
	if (val.length() == 1 && !isdigit(val[0]))
		return false;
	if (val[0] != '+' && !isdigit(val[0]))
		return false;
	for (size_t i = 1; i < val.length(); i++) {
		if (!isdigit(val[i]) && val[i] != '.' && !isspace(val[i]))
			return false;
	}
	return true;
}

void find_input(std::map<std::string, float> &data_base, std::string file) {
	std::string tmp;
	std::string key;
	std::string tmp_val;
	float value;
	std::fstream data;

	data.open(&file[0]);
	if (!data.is_open()) {
		std::cerr << "couldn't open input file\n";
		return ;
	}
	while (std::getline(data, tmp)) {
		key = tmp.substr(0, tmp.find("|") - 1);
		tmp_val = tmp.substr(tmp.find("|") + 1, tmp.length());
		std::istringstream iss (tmp_val);

		iss >> value;
		if (key == "date" && (tmp_val == " value"))
			continue;
		else if (tmp.find("|") == std::string::npos || !validate_key(key))
			std::cerr << "Error: bad input => " << key << std::endl;
		else if (value < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (!validate_value(tmp_val))
			std::cerr << "Error: bad input => " << tmp_val << std::endl;
		else if (value > 1000)
			std::cerr << "Error: too large a number." << std::endl;
		else {
			std::map<std::string, float>::iterator it = data_base.upper_bound(key);
			if (it == data_base.begin())
				std::cout << key << " => " << value << " = " << (value * (it)->second) << std::endl;
			else
				std::cout << key << " => " << value << " = " << (value * (--it)->second) << std::endl;
		}
	}
}