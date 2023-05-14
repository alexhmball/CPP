#include <iostream>
#include "Array.hpp"
#include "Array.tpp"


#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
	Array<int> numbers_copy;
    int* mirror = new int[MAX_VAL];
	Array<std::string> strings(10);
	for (int i = 0; i < 10; i++)
	{
		strings[i] = "test";
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << strings[i] << std::endl;
	}
	if (strings.size() != 10)
		std::cerr << "wrong size!" << std::endl;
	if (numbers.size() != MAX_VAL)
		std::cerr << "wrong size!" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = i;
        mirror[i] = i;
    }
	numbers_copy = numbers;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (numbers[i] != numbers_copy[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] += 2;
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (numbers[i] == numbers_copy[i])
		{
			std::cerr << "didn't make a deep copy!" << std::endl;
			return 1;
		}
	}
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}