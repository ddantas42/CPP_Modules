#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <list>
# include <algorithm>
# include <vector>
# include <fstream>
# include <ctime>
# include <limits.h>

class PmergeMe
{
	public:
		// Constructors
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		
		// Destructor
		~PmergeMe();
		
		// Operators
		PmergeMe & operator=(const PmergeMe &assign);
		
		static void sort(int ac, char **av);

	private:
		static double v_sort(int ac, char **av); 
		static bool check_args(int ac, char **av);
		
};

#endif