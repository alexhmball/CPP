#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter constructor called\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &S) {
	std::cout << "ScalarConverter copy constructor called\n";
	if (this != &S)
		*this = S;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter deconstructor called\n";
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &S) {
	std::cout << "ScalarConverter copy assignment operator called\n";
	(void)S;
	return (*this);
}

bool ScalarConverter::isSpecial(std::string str) {
	if (str == "nan")
		return true;
	if (str == "-inff")
		return true;
	if (str == "+inff" || str == "inff")
		return true;
	if (str == "-inf")
		return true;
	if (str == "+inf" || str == "inf")
		return true;
	if (str == "nanf")
		return true;
	return false;
}

void ScalarConverter::convert(std::string str) {
	if (isSpecial(str))
		convertSpecail(str);
	else if (isChar(str))
		toChar(str);
	else if (isFloat(str))
		toFloat(str);
	else if (isDouble(str))
		toDouble(str);
	else if (isInt(str))
		toInt(str);
	else
		failure();
}

bool ScalarConverter::isChar(std::string str) {
	if (str.length() == 1)
	{
		if (isascii(str[0]) && !isdigit(str[0]))
			return true;
	}
	return false;
}

bool ScalarConverter::isFloat(std::string str) {
	size_t pos;

	pos = str.find('.');
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '-')
			return false;
	}
	if (pos != std::string::npos)
	{
		if (str.find('f', pos + 1) != std::string::npos)
			return true;
	}
	return false;
}

bool ScalarConverter::isDouble(std::string str) {
	size_t pos;

	pos = str.find('.');
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-')
			return false;
	}
	if (pos != std::string::npos)
	{
		if (str.find('.', pos + 1) == std::string::npos)
			return true;
	}
	return false;
}

bool ScalarConverter::isInt(std::string str) {
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && str[i] != '-')
			return false;
	}
	return true;
}

char ScalarConverter::toChar(std::string str) {
	char c;

	c = static_cast<char>(str[0]);
	charToAll(c);
	return c;
}

int ScalarConverter::toInt(std::string str) {
	int x;
	std::istringstream iss (str);

	iss >> x;
	if (iss.fail())
		failure();
	else
		intToAll(x);
	return x;
}

float ScalarConverter::toFloat(std::string str) {
	float f;
	std::istringstream iss (str);

	iss >> f;
	if (iss.fail())
		failure();
	else
		floatToAll(f);
	return f;
}

double ScalarConverter::toDouble(std::string str) {
	double d;
	std::istringstream iss (str);

	iss >> d;
	if (iss.fail())
		failure();
	else
		doubleToAll(d);
	return d;
}

void ScalarConverter::charToAll(char c) {
	int x;
	float f;
	double d;

	x = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	if (x < 0 || x > 127)
		std::cout << "char: impossible" << std::endl;
	else
		printChar(c);
	printFloat(f);
	printDouble(d);
	printInt(x);
}

void ScalarConverter::intToAll(int x) {
	char c;
	float f;
	double d;

	c = static_cast<char>(x);
	f = static_cast<float>(x);
	d = static_cast<double>(x);
	printInt(x);
	printFloat(f);
	if (x < 0 || x > 127)
		std::cout << "char: impossible" << std::endl;
	else
		printChar(c);
	printDouble(d);
}

void ScalarConverter::floatToAll(float f) {
	char c;
	int x;
	double d;

	c = static_cast<char>(f);
	x = static_cast<int>(f);
	d = static_cast<double>(f);
	printFloat(f);
	if (x < 0 || x > 127)
		std::cout << "char: impossible" << std::endl;
	else
		printChar(c);
	printDouble(d);
	printInt(x);
}

void ScalarConverter::doubleToAll(double d) {
	char c;
	int x;
	float f;

	c = static_cast<char>(d);
	x = static_cast<int>(d);
	f = static_cast<float>(d);
	printDouble(d);
	printFloat(f);
	if (x < 0 || x > 127)
		std::cout << "char: impossible" << std::endl;
	else
		printChar(c);
	printInt(x);
}

void ScalarConverter::printChar(char c) {
	if (isprint(c))
		std::cout << "char: '" << c  << "'" << std::endl;
	else
		std::cout << "char: Not displayable" << std::endl;
}

void ScalarConverter::printInt(int x) {
	std::cout << "int: " << x << std::endl;
}

void ScalarConverter::printFloat(float f) {
	if (f - (int)f == 0.0f)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void ScalarConverter::printDouble(double d) {
	if (d - (int)d == 0.0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convertSpecail(std::string str) {
	if (str == "nan")
		nanToAll(nanToDouble(str));
	if (str == "nanf")
		nanfToAll(nanfToFloat(str));
	if (str == "+inf" || str == "inf")
		infToAll(infToDouble(str));
	if (str == "+inff" || str == "inff")
		inffToAll(inffToFloat(str));
	if (str == "-inf")
		infToAll(negInfToDouble(str));
	if (str == "-inff")
		inffToAll(negInffToFloat(str));
}

double ScalarConverter::nanToDouble(std::string str) {
	return nan(&str[0]);
}

void ScalarConverter::nanToAll(double d) {
	char c;
	int x;
	float f;

	c = static_cast<char>(d);
	x = static_cast<int>(d);
	f = static_cast<float>(d);

	if (std::numeric_limits<double>::has_quiet_NaN)
		printDouble(d);
	else
		std::cout << "double: impossible" << std::endl;
	if (std::numeric_limits<float>::has_quiet_NaN)
		printFloat(f);
	else
		std::cout << "float: impossible" << std::endl;
	if (std::numeric_limits<char>::has_quiet_NaN)
		printChar(c);
	else
		std::cout << "char: impossible" << std::endl;
	if (std::numeric_limits<int>::has_quiet_NaN)
		printInt(x);
	else
		std::cout << "int: impossible" << std::endl;
}

float ScalarConverter::nanfToFloat(std::string str) {
	return nanf(&str[0]);
}

void ScalarConverter::nanfToAll(float f) {
	char c;
	int x;
	double d;

	c = static_cast<char>(f);
	x = static_cast<int>(f);
	d = static_cast<double>(f);

	if (std::numeric_limits<float>::has_quiet_NaN)
		printFloat(f);
	else
		std::cout << "float: impossible" << std::endl;
	if (std::numeric_limits<double>::has_quiet_NaN)
		printDouble(d);
	else
		std::cout << "double: impossible" << std::endl;
	if (std::numeric_limits<char>::has_quiet_NaN || std::numeric_limits<int>::has_signaling_NaN)
		printChar(c);
	else
		std::cout << "char: impossible" << std::endl;
	if (std::numeric_limits<int>::has_quiet_NaN || std::numeric_limits<int>::has_signaling_NaN)
		printInt(x);
	else
		std::cout << "int: impossible" << std::endl;
}

double ScalarConverter::infToDouble(std::string str) {
	double d;
	(void)str;

	d = std::numeric_limits<double>::infinity();
	return d;
}

void ScalarConverter::infToAll(double d) {
	char c;
	int x;
	float f;

	c = static_cast<char>(d);
	x = static_cast<int>(d);
	f = static_cast<float>(d);

	if (std::numeric_limits<double>::has_infinity)
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
	if (std::numeric_limits<float>::has_infinity)
		printFloat(f);
	else
		std::cout << "float: impossible" << std::endl;
	if (std::numeric_limits<char>::has_infinity)
		printChar(c);
	else
		std::cout << "char: impossible" << std::endl;
	if (std::numeric_limits<int>::has_infinity)
		printInt(x);
	else
		std::cout << "int: impossible" << std::endl;
}

float ScalarConverter::inffToFloat(std::string str) {
	float f;
	(void)str;

	f = std::numeric_limits<float>::infinity();
	return f;
}

void ScalarConverter::inffToAll(float f) {
	char c;
	int x;
	double d;

	c = static_cast<char>(f);
	x = static_cast<int>(f);
	d = static_cast<double>(f);

	if (std::numeric_limits<float>::has_infinity)
		printFloat(f);
	else
		std::cout << "float: impossible" << std::endl;
	if (std::numeric_limits<double>::has_infinity)
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
	if (std::numeric_limits<char>::has_infinity)
		printChar(c);
	else
		std::cout << "char: impossible" << std::endl;
	if (std::numeric_limits<int>::has_infinity)
		printInt(x);
	else
		std::cout << "int: impossible" << std::endl;
}

double ScalarConverter::negInfToDouble(std::string str) {
	double d;

	d = infToDouble(str) * -1;
	return d;
}

float ScalarConverter::negInffToFloat(std::string str) {
	float f;

	f = inffToFloat(str) * -1;
	return f;
}

// void ScalarConverter::negInfToAll(double d) {
// 	infToAll(d);
// }

void ScalarConverter::failure( void ) {
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible\n";
}