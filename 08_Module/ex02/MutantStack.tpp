#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	this->stack = std::stack<T>();
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : stack(copy.stack) {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &assign)
{
	std::stack<T>::operator=(assign);
	return *this;
}

template <typename T>
typename MutantStack<T>::cont::iterator MutantStack<T>::begin(void)
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::cont::iterator MutantStack<T>::end(void)
{
	return std::stack<T>::c.end();
}


