#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
	: _nan(false), _nanf(false), _pos_inf(false), _pos_inff(false), _neg_inf(false), _neg_inff(false){
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
	if (this != &S)
	{
		// _char = S._char;
		// _int = S._int;
		// _float = S._float;
		// _double = S._double;
		_nan = S._nan;
		_nanf = S._nanf;
		_pos_inf = S._pos_inf;
		_pos_inff = S._pos_inff;
		_neg_inf = S._neg_inf;
		_neg_inff = S._neg_inff;
	}
	return (*this);
}

// bool ScalarConverter::isSpecial(std::string str) {
// 	if (str == "nan")
// 		_nan = true;
// 	if (str == "-inff")
// 		_neg_inff = true;
// 	if (str == "+inff")
// 		_pos_inff = true;
// 	if (str == "-inf")
// 		_neg_inf = true;
// 	if (str == "+inf")
// 		_pos_inf = true;
// 	if (str == "nanf")
// 		_nanf = true;
// 	if (_nan == true || _nanf == true || _neg_inff == true
// 		|| _pos_inff == true || _neg_inf == true || _pos_inf == true)
// 		return true;
// 	return false;
// }

bool ScalarConverter::isNotDisplayable(char c) {
	if (!isprint(c))
		return true;
	return false;
}
