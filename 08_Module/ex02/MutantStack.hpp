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
		~MutantStack();
		
		// Operators
		MutantStack & operator=(const MutantStack &assign) {stack = assign.stack; return *this;};
		
		// Member functions
		void push(T value);
		void pop();
		T top();
		size_t size();
		bool empty();

		template <typename U>
		class Iterator
		{
			public:
				Iterator() {};
				Iterator(T *ptr) : ptr(ptr) {};
				Iterator(const Iterator &copy) : ptr(copy.ptr) {};
				~Iterator() {};
				Iterator & operator=(const Iterator &assign) {ptr = assign.ptr; return *this;};
				bool operator!=(const Iterator &other) {return ptr != other.ptr;};
				bool operator==(const Iterator &other) {return ptr == other.ptr;};
				T & operator*() {return *ptr;};
				Iterator & operator++() {ptr++; return *this;};
				Iterator operator++(int) {Iterator tmp(*this); operator++(); return tmp;};
				Iterator & operator--() {ptr--; return *this;};
				Iterator operator--(int) {Iterator tmp(*this); operator--(); return tmp;};
			private:
				T *ptr;
		};

	private:
		std::stack<T> stack;	
};

# include "MutantStack.tpp"

#endif