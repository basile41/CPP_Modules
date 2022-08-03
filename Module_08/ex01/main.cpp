/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:30:53 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/03 21:04:07 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <vector>

#include "Span.hpp"

#define SPAN_SIZE 10000

void	ft_print_int(int i)
{

	std::cout << i << std::endl;
}

int main()
{
	Span span(5);

	span.addNumber(452445);

	try
	{
		span.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() << '\n';
	}
	try
	{
		span.addNumber(INT_MIN);
		span.addNumber(INT_MAX);
		span.addNumber(-42);
		span.addNumber(42);
		span.addNumber(354);
	}
	catch (const std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl << std::endl;

	{
		Span big_span(SPAN_SIZE);
		srand (time(NULL));
		for (int i = 0; i < SPAN_SIZE; i++)
			big_span.addNumber(rand());
		std::cout << "longest 	" << big_span.longestSpan() << std::endl;
		std::cout << "shortest	" << big_span.shortestSpan() << std::endl << std::endl;
	}

	{
		Span big_span(SPAN_SIZE);
		std::vector<int> vector;
		for (int i = 0; i < SPAN_SIZE; i++)
			vector.push_back(i);
		big_span.addNumbers(vector.begin(), vector.end());
		std::cout << "longest 	" << big_span.longestSpan() << std::endl;
		std::cout << "shortest	" << big_span.shortestSpan() << std::endl << std::endl;
	}
}
