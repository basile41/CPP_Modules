/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:06:36 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/01 21:09:18 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "easyfind.hpp"

int main()
{
	std::vector<int> vector_int;
	vector_int.push_back(0);
	vector_int.push_back(1);
	vector_int.push_back(2);
	vector_int.push_back(3);
	vector_int.push_back(4);
	vector_int.push_back(42);
	vector_int.push_back(6);
	std::cout << *easyfind(vector_int, 42) << std::endl;

	std::list<int> list_int;
	list_int.push_back(0);
	list_int.push_back(1);
	list_int.push_back(2);
	list_int.push_back(42);
	list_int.push_back(4);
	list_int.push_back(5);
	list_int.push_back(6);
	std::cout << *easyfind(list_int, 42) << std::endl;

	return 0;
}