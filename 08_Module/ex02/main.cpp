#include <iostream>
#include "MutantStack.hpp"
#include <list>

// int main()
// {
// 	std::list<int> mstack;

// 	mstack.push_back(5);
// 	mstack.push_back(17);

// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
	
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::list<int> s(mstack);
// 	return 0;
// }

int main()
{
	MutantStack<int> stack2;
	 		
	stack2.push(5);
	stack2.push(17);

	std::cout << stack2.top() << std::endl;
	stack2.pop();
	
	std::cout << stack2.size() << std::endl;
	stack2.push(3);
	stack2.push(5);
	stack2.push(737);
	//[...]
	stack2.push(0);

	MutantStack<int> mstack = stack2 ;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}