/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:43:08 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/31 17:30:29 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include "utils.hpp"

#define TAB_SIZE 3

void	ft_hello(std::string &s)
{
	s = "Hello World !";
}

int main()
{
	int		i_tab[TAB_SIZE] = {1, 2, 3};
	iter(i_tab, TAB_SIZE, ft_square);
	iter(i_tab, TAB_SIZE, ft_double);
	iter(i_tab, TAB_SIZE, ft_print);
	std::cout << std::endl;
	
	float	f_tab[TAB_SIZE] = {1, 2, 3.14f};
	iter(f_tab, TAB_SIZE, ft_square);
	iter(f_tab, TAB_SIZE, ft_double);
	iter(f_tab, TAB_SIZE, ft_print);
	std::cout << std::endl;

	std::string str_tab[TAB_SIZE];
	iter(str_tab, TAB_SIZE, ft_hello);
	iter(str_tab, TAB_SIZE, ft_double);
	iter(str_tab, TAB_SIZE, ft_print);
	
	return 0;
}