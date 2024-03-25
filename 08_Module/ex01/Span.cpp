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
	if (this->numbers.size() + 1 <= this->size)
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

	double mid = (max - min) / 2;

	for (std::vector<int>::iterator i = this->numbers.begin(); i != this->numbers.end(); i++)
	{
		for(std::vector<int>::iterator i2 = i + 1; i2 != this->numbers.end(); i2++)
		{
			if (std::abs(*i - *i2) < mid)
				mid = std::abs(*i - *i2);
		}
	}
	return mid;
}

int Span::longestSpan()
{
	if (this->numbers.size() < 2)
		throw std::string("Exception: Not enough numbers!");

	int min = *(std::min_element(this->numbers.begin(), this->numbers.end()));
	int max = *(std::max_element(this->numbers.begin(), this->numbers.end()));
	
	return std::abs(max - min);
}

void Span::AddRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->numbers.size() +  std::distance(begin, end) <= this->size)
		this->numbers.insert(this->numbers.end(), begin, end);
	else
	{
		std::cout << "Error: numbers size + added size = " << this->numbers.size() + std::distance(begin, end) << std::endl;
		std::cout << "Error: size = " << this->size << std::endl;
		throw std::string("Error: couldn't add range");
	}
}
