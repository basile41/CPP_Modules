/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:40:03 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/07 19:38:41 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook 		phonebook;
	std::string		line;
	do
	{
		std::cout << "Please, enter a command" << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
		if (line == "ADD")
			phonebook.add();
		else if (line == "SEARCH")
			phonebook.search();
	} while (line != "EXIT");
	
}