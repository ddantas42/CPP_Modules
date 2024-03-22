#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {this->stack = std::stack<T>();}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : stack(copy.stack) {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
void MutantStack<T>::push(T value)
{
	this->stack.push(value);
}

template <typename T>
void MutantStack<T>::pop()
{
	this->stack.pop();
}

template <typename T>
T MutantStack<T>::top()
{
	return (this->stack.top());
}

template <typename T>
size_t MutantStack<T>::size()
{
	return (this->stack.size());
}

template <typename T>
bool MutantStack<T>::empty()
{
	if (this->stack.empty())
		return (true);
	return (false);
}
