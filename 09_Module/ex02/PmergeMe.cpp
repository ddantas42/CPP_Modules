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
	clock_t start, end;
	start = clock();
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
		if (i + 1 == X.end() || i + 2 == X.end())
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

	for (std::vector<int>::iterator i = X.begin(); i != X.end(); i++) // 5
		S.insert(std::lower_bound(S.begin(), S.end(), *i), *i);

	end = clock();
	// 	std::cout << "Sorted Integeres: ";
	// for (std::vector<int>::iterator s = S.begin(); s != S.end(); s++)
	// 	std::cout << *s << " ";
	// std::cout << std::endl;
	return ((double) (end - start)) / CLOCKS_PER_SEC;

}

double PmergeMe::l_sort(int ac, char **av)
{
	clock_t start, end;
	start = clock();
	std::list<int> X;
	std::list<int> S;
	std::list<int> remains;
	std::list<int>::iterator i;

	for (int n = 1; n < ac; n++)
		X.push_back(std::atoi(av[n]));
	i = X.begin();
	int smallest_left = *i;
	while (X.size() >= 2) // 1, 2, 3
	{
		if (*i > *X.end())
		{
			if (*X.end() < smallest_left)
				smallest_left = *X.end();
			S.insert(std::lower_bound(S.begin(), S.end(), *i), *i);
			remains.push_back(*X.end());
			X.pop_front();
			X.pop_back();
		}
		else
		{
			if (*i < smallest_left)
				smallest_left = *i;

			S.insert(std::lower_bound(S.begin(), S.end(), *X.end()), *X.end());
			remains.push_back(*i);
			X.pop_front();
			X.pop_back();

		}

		std::cout << "Current List: ";
		for (std::list<int>::iterator s = S.begin(); s != S.end(); s++)
			std::cout << *s << " ";
		std::cout << std::endl;

		if (X.size() > 2)
		{
			// remains.push_back(*i);
			// X.pop_front();
			break ;
		}
		i = X.begin();
	}
	// S.insert(S.begin(), smallest_left); // 4 paired with smallest
	// X.assign(remains.begin(), remains.end());
	
	// for (std::list<int>::iterator i = X.begin(); i != X.end(); i++) // 5
	// 	S.insert(std::lower_bound(S.begin(), S.end(), *i), *i);

	end = clock();
		std::cout << "Sorted Integeres: ";
	for (std::list<int>::iterator s = S.begin(); s != S.end(); s++)
		std::cout << *s << " ";
	std::cout << std::endl;
	return ((double) (end - start)) / CLOCKS_PER_SEC;
}

void PmergeMe::sort(int ac, char **av)
{
	if (check_args(ac, av))
	{
		std::cout << "Error" << std::endl;
		return ;
	}


	std::cout << "Unsorted Integeres: ";
	int i = 1;
	for (; i < ac; i++)
		std::cout << av[i] << " ";
	std::cout << std::endl;

	float v_time = 0; 
	try {
		v_time = v_sort(ac, av);
	} catch (const char *e) {
		std::cout << e << std::endl; 
		return ;
	}

	float l_time = l_sort(ac, av);
	std::cout << "Time to process a range of " << i << " elements with std::vector : " << v_time << std::endl; 
	std::cout << "Time to process a range of " << i << " elements with std::list : " << l_time << std::endl; 
}