#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <vector>
#include <list>
#include <deque>
#include <stack>

int main( void ) {
	std::stack<int> test;

	test.push(11);
	MutantStack<int> stack;
    stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
    stack.push(num);
	std::cout << stack.size() << std::endl;
	MutantStack<int>::iterator it = stack.begin();
	for (unsigned long i = 0; i < stack.size(); i++)
	{
		std::cout << *it << std::endl;
		it++;
	}
    stack.pop();
    stack.pop();
    stack.pop();
	std::cout << *stack.begin() << std::endl;
	std::cout << *stack.end() << std::endl;
    while (!stack.empty()) {
        std::cout << stack.top() <<" ";
        stack.pop();
    }
	std::cout << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it1;
	--it1;
	while (it1 != ite)
	{
	std::cout << *it1 << std::endl;
	++it1;
	}
	std::stack<int> s(mstack);
	return 0;
}