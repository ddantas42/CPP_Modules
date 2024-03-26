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
	std::vector<int> remains;
	std::vector<int>::iterator i;
	
	for (int n = 1; n < ac; n++)
		X.push_back(std::atoi(av[n]));

	for (std::vector<int>::iterator it = X.begin(); it != X.end(); it++)
	{
		for (std::vector<int>::iterator it2 = X.begin(); it2 != X.end(); it2++)
		{
			if (std::distance(X.begin(), it) == std::distance(X.begin(), it2))
				continue;
			if (*it2 == *it)
			{
				std::cout << *it << std::endl;
				throw "Error: duplicate numbers";
			}

		}
	}


	i = X.begin();
	int smallest_left = *i;
	while (i != X.end() - 1) // 1, 2, 3
	{
		if (*i > *(i + 1))
		{
			if (*(i + 1) < smallest_left)
				smallest_left = *(i+1);
			S.insert(std::lower_bound(S.begin(), S.end(), *i), *i);
			remains.push_back(*i);
		}
		else
		{
			if (*i < smallest_left)
				smallest_left = *i;
			S.insert(std::lower_bound(S.begin(), S.end(), *(i + 1)), *(i + 1));
			remains.push_back(*(i+1));
		}
		if (i + 2 == X.end())
			break;
		i += 2;
	}
	remains.push_back(smallest_left); // erase remaining of X that already are in S
	for (std::vector<int>::iterator it = remains.begin(); it != remains.end(); it++)
	{
		for (std::vector<int>::iterator it2 = X.begin(); it2 != X.end(); it2++)
		{
			if (*it2 == *it)
				X.erase(X.begin() + std::distance(X.begin(), it2));

		}
	}

	S.insert(S.begin(), smallest_left); // 4 paired with smallest
	// S.insert(S.begin(), *std::min_element(X.begin(), X.end()));

	for (std::vector<int>::iterator i = X.begin(); i != X.end(); i++) // 5
		S.insert(std::lower_bound(S.begin(), S.end(), *i), *i);

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
	try {
		v_sort(ac, av);
	} catch (const char *e) {
		std::cout << e << std::endl; 
		return ;
	}
	std::vector<int> v;
	for (int i = 1; i < ac; i++)
	{
		int n = std::atoi(av[i]);
		v.push_back(n);
	}
}