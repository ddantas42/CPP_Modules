#include "Span.hpp"

// Constructors
Span::Span() {this->size = 0;}

Span::Span(unsigned int n) {this->size = n;}

Span::Span(const Span &copy)
{
	this->size = copy.size;
	this->numbers = copy.numbers;
}

// Destructor
Span::~Span()
{}

// Operators
Span & Span::operator=(const Span &assign)
{
	this->size = assign.size;
	this->numbers = assign.numbers;
	return *this;
}

void Span::addNumber(int n)
{
	if (this->numbers.size() + 1 < this->size)
		this->numbers.push_back(n);
	else
	{
		std::cout << "Error: couldn't add " << n << std::endl;
		throw std::string("Exception: Vector is full!");
	}
}

int Span::shortestSpan()
{
	if (this->numbers.size() < 2)
		throw std::string("Exception: Not enough numbers!");
	
	int min = *(std::min_element(this->numbers.begin(), this->numbers.end()));
	int max = *(std::max_element(this->numbers.begin(), this->numbers.end()));

	double mid = (min - max) / 2;

	std::cout << "Mid: " << mid << std::endl;
	for (std::vector<int>::iterator i = this->numbers.begin(); i != this->numbers.end(); i++)
	{
		if (*i < mid)
			min = *i;
		else if (*i >= mid)
			break ;
	}
	for (std::vector<int>::iterator i = this->numbers.end(); i != this->numbers.begin(); i--)
	{
		if (*i > mid)
			max = *i;
		else if (*i <= mid)
			break ;
	}
	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " << max << std::endl;
	return max - min;
}

int Span::longestSpan()
{
	if (this->numbers.size() < 2)
		throw std::string("Exception: Not enough numbers!");

	int min = *(std::min_element(this->numbers.begin(), this->numbers.end()));
	int max = *(std::max_element(this->numbers.begin(), this->numbers.end()));
	
	return max - min;
}