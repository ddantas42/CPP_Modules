#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	public:
		// Constructors
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);

		void addNumber(int n);
		
		int shortestSpan();
		int longestSpan();

		void AddRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private:
		unsigned int size;
		std::vector<int> numbers;
};

#endif