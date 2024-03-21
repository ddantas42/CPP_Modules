#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {this->stack = std::stack<T>();}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : stack(copy.stack) {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &copy)
{
	this->stack = copy.stack;
	return (*this);
}

template <typename T>
void MutantStack::push(T value)
{
	this->stack.push(value);
}

template <typename T>
void MutantStack::pop()
{
	this->stack.pop();
}

template <typename T>
T MutantStack::top()
{
	return (this->stack.top());
}

template <typename T>
size_t MutantStack::size()
{
	return (this->stack.size());
}

template <typename T>
bool MutantStack::empty()
{
	if (this->stack.empty())
		return (true);
	return (false);
}
