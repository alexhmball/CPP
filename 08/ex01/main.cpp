#include "Span.hpp"

int main(void) {
	Span test(5);
	Span copy;

	test.addNumber(6);
	test.addNumber(3);
	test.addNumber(17);
	test.addNumber(9);
	test.addNumber(11);
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	copy = test;
	std::cout << copy.shortestSpan() << std::endl;
	std::cout << copy.longestSpan() << std::endl;

	Span copy2(test);
	std::cout << copy2.shortestSpan() << std::endl;
	std::cout << copy2.longestSpan() << std::endl;

	std::vector<int> smalltest(3, 1);
	std::vector<int>::iterator its1 = smalltest.begin();
	std::vector<int>::iterator its2 = smalltest.end();
	smalltest[0] = 4;
	smalltest[1] = 1;
	smalltest[2] = 10;
	Span small(3);
	small.addRange(its1, its2);
	std::cout << small.shortestSpan() << std::endl;
	std::cout << small.longestSpan() << std::endl;

	Span big(10000);
	std::vector<int> bigtest(10000, 1);
	std::vector<int>::iterator it1 = bigtest.begin();
	std::vector<int>::iterator it2 = bigtest.end();
	big.addRange(it1, it2);
	std::cout << big.shortestSpan() << std::endl;
	std::cout << big.longestSpan() << std::endl;
	return (0);
}