/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:30:53 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/02 18:46:22 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

void	ft_print_int(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::set<int>  test;

	test.insert(1);
	test.insert(-1);
	test.insert(0);
	
	for_each(test.begin(), test.end(), ft_print_int);
}