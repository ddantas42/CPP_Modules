#include "PmergeMe.hpp"

// Constructors
PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &copy) {(void) copy;}
// Destructor
PmergeMe::~PmergeMe(){}
// Operators
PmergeMe & PmergeMe::operator=(const PmergeMe &assign)
{(void) assign;return *this;}

bool PmergeMe::check_args(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		double n = 0;
		char deli = 0;
		if (std::sscanf(av[i], "%le%c", &n, &deli) != 1)
			return true;
		else if (n < 0 || n > INT_MAX)
			return true;
	}
	return false;
}

double PmergeMe::v_sort(int ac, char **av)
{
	std::vector<int> X;
	std::vector<int> S;
	std::vector<int>::iterator i;
	
	for (int n = 1; n < ac; n++)
		X.push_back(std::atoi(av[n]));

	i = X.begin();
	while (i != X.end() - 1)
	{
		if (*i > *(i + 1))
			S.push_back(*i);
		else
			S.push_back(*(i + 1));
		if (i + 2 == X.end())
			break;
		i += 2;
	}

	// std::sort(v.begin(), v.end());
	
		std::cout << "Sorted Integeres: ";
	for (std::vector<int>::iterator s = S.begin(); s != S.end(); s++)
		std::cout << *s << " ";
	return 0;

}

void PmergeMe::sort(int ac, char **av)
{
	if (check_args(ac, av))
	{
		std::cout << "Error" << std::endl;
		return ;
	}

	std::cout << "Unsorted Integeres: ";
	for (int i = 1; i < ac; i++)
		std::cout << av[i] << " ";
	std::cout << std::endl;
	
	v_sort(ac, av);
	std::vector<int> v;
	for (int i = 1; i < ac; i++)
	{
		int n = std::atoi(av[i]);
		v.push_back(n);
	}
}