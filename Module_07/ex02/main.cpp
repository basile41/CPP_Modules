/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:43:08 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/01 17:33:33 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> int_array(5);
	int_array[0] = 1;
	int_array[1] = 2;
	int_array[2] = 3;
	int_array[3] = 4;
	int_array[4] = 5;

	Array<int> const  const_int_array(int_array);
	int_array[1] = -545;
	int_array[3] = 42;
		
	std::cout << int_array << std::endl;
	std::cout << const_int_array << std::endl;

	try
	{
		int_array[5];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<float> test;
	try
	{
		test[0];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	int_array = const_int_array;
	std::cout << int_array << std::endl;
	return 0;
}