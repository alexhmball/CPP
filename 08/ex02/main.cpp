#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <vector>
#include <list>

int main( void ) {
	MutantStack<int, std::list<int> > stack;
    stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
    stack.push(num);
	std::cout << stack.size() << std::endl;
	MutantStack<int, std::list<int> >::iterator it = stack.begin();
	for (unsigned long i = 0; i < stack.size(); i++)
		std::cout << *it++ << std::endl;
    stack.pop();
    stack.pop();
    stack.pop();
	std::cout << *stack.begin() << std::endl;
	std::cout << *stack.end() << std::endl;
    while (!stack.empty()) {
        std::cout << stack.top() <<" ";
        stack.pop();
    }
	return 0;
}