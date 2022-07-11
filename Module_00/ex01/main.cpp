/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:40:03 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/11 17:26:35 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook 		phonebook;
	std::string		line;

	while (42)
	{
		std::cout << "> ";
		if (std::getline(std::cin, line).good() == false || line == "EXIT")
			break ;
		if (line == "ADD")
			phonebook.add();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line.size())
			std::cout << "Bad command" << std::endl;
	}
}
