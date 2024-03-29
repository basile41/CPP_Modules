/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:29 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/09 16:13:52 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

template<class T>
T insertion_sort(T &to_sort)
{
	T sorted;
	for (typename T::iterator it = to_sort.begin(); it != to_sort.end(); it++)
	{
		typename T::iterator it2 = std::lower_bound(sorted.begin(), sorted.end(), *it);
		sorted.insert(it2, *it);
	}
	return sorted;
}

template<class T>
void merge_insertion_sort(T &x, size_t k)
{
	if (x.size() < 2)
		return;
	if (x.size() <= k)
	{
		x = insertion_sort(x);
	}
	else
	{
		typename T::iterator it = x.begin();
		std::advance(it, x.size() / 2);
		T x1(x.begin(), it);
		T x2(it, x.end());
		merge_insertion_sort(x1, k);
		merge_insertion_sort(x2, k);
		std::merge(x1.begin(), x1.end(), x2.begin(), x2.end(), x.begin());
	}
}

// void merge_insertion_sort(std::vector<int> &x, size_t k);
// void merge_insertion_sort(std::list<int> &x, size_t k);

#endif /* PMERGEME_HPP */
