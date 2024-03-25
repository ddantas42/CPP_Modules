#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	this->stack = std::stack<T>();
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy)
{
	(void)copy;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &assign)
{
	this->stack = std::stack<T>(assign.stack);
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


