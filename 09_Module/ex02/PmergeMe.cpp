#include "PmergeMe.hpp"

// Constructors
PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &copy) {(void) copy;}
// Destructor
PmergeMe::~PmergeMe(){}
// Operators
PmergeMe & PmergeMe::operator=(const PmergeMe &assign)
{(void) assign;return *this;}

template <typename T>
void PmergeMe::print(T &container, std::string c)
{
	std::cout << "Current " << c << ": ";
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

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
		else if (n - (int)n != 0)
			return true;
		else
		{
			std::string str = av[i];
			if (str.find('.') != std::string::npos)
				return true;
		
		}
	}
	std::vector<int> v;
	for (int n = 1; n < ac; n++)
		v.push_back(std::atoi(av[n]));
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (std::vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++)
		{
			if (std::distance(v.begin(), it) == std::distance(v.begin(), it2))
				continue;
			if (*it2 == *it)
				return true;
		}
	}
	return false;
}


double PmergeMe::current_time()
{
    struct timespec ts;
    clock_gettime(1, &ts);
    return ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
}

double PmergeMe::v_sort(int ac, char **av)
{
	double start, end;
	std::vector<int> X;
	std::vector<int> S;
	std::vector<int> remains;
	std::vector<int>::iterator i;
	
	start = current_time();
	for (int n = 1; n < ac; n++)
		X.push_back(std::atoi(av[n]));
	i = X.begin();
	int smallest_left = *i;
	while (i != X.end() && i != X.end() - 1) // 1, 2, 3
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
	S.insert(S.begin(), smallest_left); // 4 paired with first and smallest
	remains.push_back(smallest_left); // erase remaining of X that already are in S
    for (std::vector<int>::iterator i = remains.begin(); i != remains.end(); ++i)
	{
        std::vector<int>::iterator eraseIt = std::find(X.begin(), X.end(), *i);
        if (eraseIt != X.end())
            X.erase(eraseIt);
    }
	for (std::vector<int>::iterator i = X.begin(); i != X.end(); i++) // 5
		S.insert(std::lower_bound(S.begin(), S.end(), *i), *i);
	end = current_time();
	// print(S, "Vs");
	return (end - start);
}

double PmergeMe::l_sort(int ac, char **av)
{
	double start, end;
	std::list<int> X;
	std::list<int> S;
	std::list<int> remains;
	std::list<int>::iterator i;

	start = current_time();
	for (int n = 1; n < ac; n++)
		X.push_back(std::atoi(av[n]));
	int smallest = X.front();
	while (X.size() >= 2) // 1, 2, 3
	{
		if (X.front() > X.back())
		{
			if (X.back() < smallest)
				smallest = X.back();
			S.insert(std::lower_bound(S.begin(), S.end(), X.front()), X.front());
			remains.push_back(X.back());
			X.pop_front();
			X.pop_back();
		}
		else
		{
			if (X.front() < smallest)
				smallest = X.front();
			S.insert(std::lower_bound(S.begin(), S.end(), X.back()), X.back());
			remains.push_back(X.front());
			X.pop_front();
			X.pop_back();
		}
	}

	S.insert(S.begin(), smallest); // 4
	remains.erase(std::find(remains.begin(), remains.end(), smallest));

	if (X.size() == 1)
		S.insert(std::lower_bound(S.begin(), S.end(), X.front()), X.front());
	for (std::list<int>::iterator i = remains.begin(); i != remains.end(); i++) // 5
		S.insert(std::lower_bound(S.begin(), S.end(), *i), *i);
	end = current_time();

	// print(S, "Ls");
	std::cout << "Sorted integers:  ";
	for (std::list<int>::iterator i = S.begin(); i != S.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	return end - start;
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
		std::cout << std::atoi(av[i]) << " ";
	std::cout << std::endl;

	double v_time = 0; 
	try {
		v_time = v_sort(ac, av);
	} catch (const char *e) {
		std::cout << e << std::endl; 
		return ;
	}

	double l_time = l_sort(ac, av);
	std::cout << "Time to process a range of " << i - 1 << " elements with std::vector : " << v_time  << "us" << std::endl; 
	std::cout << "Time to process a range of " << i - 1 << " elements with std::list : " << l_time << "us" << std::endl; 
}