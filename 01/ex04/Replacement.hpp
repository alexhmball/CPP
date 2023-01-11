#ifndef REPLACEMENT
#define REPLACEMENT

#include <string>
#include <iostream>
#include <fstream>

class Replacement {
	public:
		void openfiles(char **av);
		void closefile();
		void replacestr();
	private:
		std::fstream infile;
		std::fstream outfile;
		std::string file;
		std::string str1;
		std::string str2;
		std::string replace;
		std::string all;
};

#endif