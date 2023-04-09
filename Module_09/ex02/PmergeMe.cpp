/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:31 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/08 20:21:31 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
	
void merge_insertion_sort(std::list<int> &x, size_t k)
{
	if (x.size() < 2)
		return;
	if (x.size() <= k)
	{
		x = insertion_sort(x);
	}
	else
	{
		std::list<int>::iterator it = x.begin();
		std::advance(it, x.size() / 2);
		std::list<int> x1(x.begin(), it);
		std::list<int> x2(it, x.end());
		merge_insertion_sort(x1, k);
		merge_insertion_sort(x2, k);
		std::merge(x1.begin(), x1.end(), x2.begin(), x2.end(), x.begin());
	}
}