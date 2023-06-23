#include <iostream>
#include <vector>
#include <vector>
#include <deque>
#include <stack>

int main( void ) {
	std::vector<int> stack;
    stack.push_back(21);
    stack.push_back(22);
    stack.push_back(24);
    stack.push_back(25);
    int num=0;
    stack.push_back(num);
	std::vector<int> stackcopy(stack);
	std::cout << stack.size() << std::endl;
	std::vector<int>::iterator it = stack.begin();
	std::vector<int>::const_reverse_iterator itc = stackcopy.rbegin();
	for (unsigned long i = 0; i < stack.size(); i++)
	{
		// *itc += 10;
		std::cout << "stack: " << *it << std::endl;
		std::cout << "stack copy: " << *itc << std::endl;
		it++;
		itc++;
	}
    stack.pop_back();
    stack.pop_back();
    stack.pop_back();
	std::cout << *stack.begin() << std::endl;
	std::cout << *(stack.end() - 1) << std::endl;
    while (!stack.empty()) {
        std::cout << stack.back() <<" ";
        stack.pop_back();
    }
	std::cout << std::endl;
	std::vector<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::vector<int>::iterator it1 = mstack.begin();
	std::vector<int>::iterator ite = mstack.end();
	++it1;
	--it1;
	while (it1 != ite)
	{
	std::cout << *it1 << std::endl;
	++it1;
	}
	// std::stack<int> s(mstack);
	return 0;
}