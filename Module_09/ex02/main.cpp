/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:27 by bregneau          #+#    #+#             */
/*   Updated: 2023/02/26 21:28:20 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <string>
#include <sstream>

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

void	ft_print_lst(std::list<int> lst)
{
	
}

void insertion_sort(int *tab, int start, int end)
{
	for (int i = start; i < end; i++)
	{
		int tmp = tab[i + 1];
        int j = i + 1;
        while (j > start && tab[j - 1] > tmp)
		{
            tab[j] = tab[j - 1];
            j--;
		}
		tab[j] = tmp;
	}
}


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Bad number of arguments :" << std::endl;
		return (0);
	}
	std::list<int> lst;
	std::cout << "Before:	";
	for (int i = 1; i < argc; i++)
	{
		std::cout << ' ';

		std::string s(argv[i]);
		std::istringstream ss(s);
		if (!ft_check_int(s))
		{
			std::cout << "Error" << std::endl;
			return 1;
		}
		int value;
		ss >> value;
		lst.push_back(value);
		std::cout << value;
	}
		std::cout << std::endl;
	
	
}