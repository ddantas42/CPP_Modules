#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// Constructors
		MutantStack() ;
		MutantStack(const MutantStack &copy) ;
		
		// Destructor
		~MutantStack();
		
		// Operators
		MutantStack & operator=(const MutantStack &assign);
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void);
		iterator end(void);

	private:
		std::stack<T> stack;
};

# include "MutantStack.tpp"

#endif