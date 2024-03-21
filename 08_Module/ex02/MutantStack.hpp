#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T>
class MutantStack
{
	public:
		// Constructors
		MutantStack() ;
		MutantStack(const MutantStack &copy) ;
		
		// Destructor
		~MutantStack() {};
		
		// Operators
		MutantStack & operator=(const MutantStack &assign) {stack = assign.stack; return *this;};
		
		// Member functions
		void push(T value);
		void pop();
		T top();
		size_t size();
		bool empty();

		// typedef typename std::stack<T>::container_type::iterator iterator;
		// iterator begin()
		// {
		// 	return NULL;
		// };

		// iterator end()
		// {
		// 	return NULL;
		// };


	private:
		std::stack<T> stack;	
};

# include "MutantStack.tpp"

#endif