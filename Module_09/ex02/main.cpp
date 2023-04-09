/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:27 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/09 15:57:49 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <sstream>
#include <ctime>

#include "PmergeMe.hpp"

template<class T>
void	ft_print_lst(T x)
{
	for (typename T::iterator it = x.begin(); it != x.end(); it++)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

std::vector<int>	ft_fill_vector(int argc, char **argv)
{
	std::vector<int> x;
	for (int i = 1; i < argc; i++)
	{
		std::string s(argv[i]);
		std::stringstream ss(s);
		int n;
		ss >> n;
		if (ss.fail() || !ss.eof())
			throw std::invalid_argument("Bad argument");
		x.push_back(n);
	}
	return x;
}

int main(int argc, char **argv)
{
	const size_t k = 5;
    clock_t start, end;
    double cpu_time_used;
	std::vector<int> vector_int;
	std::list<int> list_int;

	if (argc < 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (0);
	}
	try
	{
		vector_int = ft_fill_vector(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	list_int = std::list<int>(vector_int.begin(), vector_int.end());

	std::cout << "Before:	";
	ft_print_lst(vector_int);
    start = clock();
	merge_insertion_sort(vector_int, k);
    end = clock();
	std::cout << "After:	";
	ft_print_lst(vector_int);

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << vector_int.size() << " elements with std::vector : " << std::fixed << std::setprecision(3) << cpu_time_used * 1000 << " ms." << std::endl;

	start = clock();
	merge_insertion_sort(list_int, k);
	end = clock();

	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << list_int.size() << " elements with std::list : " << std::fixed << std::setprecision(3) << cpu_time_used * 1000 << " ms." << std::endl;
}