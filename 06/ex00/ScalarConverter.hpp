#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <string>
#include <iostream>
#include <limits>
#include <cctype>
#include <cstring>
#include <sstream>
#include <cmath>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &S);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &S);
		static bool isSpecial(std::string str);
		static bool isChar(std::string str);
		static bool isFloat(std::string str);
		static bool isInt(std::string str);
		static bool isDouble(std::string str);
		static char toChar(std::string str);
		static int toInt(std::string str);
		static float toFloat(std::string str);
		static double toDouble(std::string str);
		static void charToAll(char c);
		static void intToAll(int x);
		static void floatToAll(float f);
		static void doubleToAll(double d);
		static void printChar(char c);
		static void printInt(int x);
		static void printFloat(float f);
		static void printDouble(double d);
		static void convertSpecail(std::string str);
		static void nanToAll(double d);
		static void nanfToAll(float f);
		static double nanToDouble(std::string str);
		static float nanfToFloat(std::string str);
		static double infToDouble(std::string str);
		static void infToAll(double d);
		static float inffToFloat(std::string str);
		static void inffToAll(float f);
		static double negInfToDouble(std::string str);
		static float negInffToFloat(std::string str);
		static void failure(void);
	public:
		static void convert(std::string str);
};

#endif