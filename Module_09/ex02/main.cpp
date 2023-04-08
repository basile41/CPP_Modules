/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:27 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/08 17:51:08 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <iomanip>

#include "PmergeMe.hpp"

bool	ft_check_int(std::string &s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (!std::isdigit(s[i]))
			return false;
	}
	return true;
}

void	ft_print_lst(std::vector<int> x)
{
	for (std::vector<int>::iterator it = x.begin(); it != x.end(); it++)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

std::vector<int> insertion_sort(std::vector<int> &to_sort)
{
	std::vector<int> sorted;
	for (std::vector<int>::iterator it = to_sort.begin(); it != to_sort.end(); it++)
	{
		std::vector<int>::iterator it2 = sorted.begin();
		while (it2 != sorted.end() && *it2 < *it)
			it2++;
		sorted.insert(it2, *it);
	}
	return sorted;
}

void merge_insertion_sort(std::vector<int> &x, size_t k)
{
	if (x.size() < 2)
		return;
	if (x.size() <= k)
	{
		x = insertion_sort(x);
	}
	else
	{
		std::vector<int> x1(x.begin(), x.begin() + x.size() / 2);
		std::vector<int> x2(x.begin() + x.size() / 2, x.end());
		merge_insertion_sort(x1, k);
		merge_insertion_sort(x2, k);
		std::merge(x1.begin(), x1.end(), x2.begin(), x2.end(), x.begin());
	}
}
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Bad number of arguments :" << std::endl;
		return (0);
	}
	(void)argv;

	// test
	int tab[] = {64, 34, 25, 12, 90};
	
	std::vector<int> x(tab, tab + sizeof(tab) / sizeof(int));

    clock_t start, end;
    double cpu_time_used;


	std::cout << "Before:	";
	ft_print_lst(x);
    start = clock();
	merge_insertion_sort(x, 5);
    end = clock();
	std::cout << "After:	";
	ft_print_lst(x);

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // calcule le temps écoulé en secondes
    std::cout << "Time to process a range of " << x.size() << " elements with std::vector : " << std::fixed << std::setprecision(3) << cpu_time_used * 1000 << " ms." << std::endl;




	// std::list<int> lst;
	// std::cout << "Before:	";
	// for (int i = 1; i < argc; i++)
	// {
	// 	std::cout << ' ';

	// 	std::string s(argv[i]);
	// 	std::istringstream ss(s);
	// 	if (!ft_check_int(s))
	// 	{
	// 		std::cout << "Error" << std::endl;
	// 		return 1;
	// 	}
	// 	int value;
	// 	ss >> value;
	// 	lst.push_back(value);
	// 	std::cout << value;
	// }
	// 	std::cout << std::endl;
	
	
}