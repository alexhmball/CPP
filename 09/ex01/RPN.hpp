#ifndef RPN_HPP
#define RPN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

bool add(std::vector<int> &rpn);
bool subtract(std::vector<int> &rpn);
bool divide(std::vector<int> &rpn);
bool multiply(std::vector<int> &rpn);
bool check_sign(std::vector<int> &rpn, std::string tmp);
void calc(std::string str);
bool is_arithmetic(char c);

#endif