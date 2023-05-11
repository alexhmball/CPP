#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <string>
#include <iostream>
#include <limits>
#include <cctype>
#include <cstring>

class ScalarConverter {
	private:
		static char _char;
		static int _int;
		static float _float;
		static double _double;
		bool _nan;
		bool _nanf;
		bool _pos_inff;
		bool _pos_inf;
		bool _neg_inff;
		bool _neg_inf;
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &S);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &S);
		// static bool isSpecial(std::string str);
		static bool isNotDisplayable(char c);
		// static char toChar(std::string str);
		// static int toInt(std::string str);
		// static float toFloat(std::string str);
		// static double toDouble(std::string str);
};

#endif