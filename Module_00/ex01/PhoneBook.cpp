/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:03:13 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/11 17:24:41 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook() : _current_id(0)
{
	std::cout << "New PhoneBook created" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	PhoneBook::add()
{
	std::string line;
	Contact		&contact = _contact[_current_id % PB_SIZE];

	do
	{
		std::cout << "First name : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.empty());
	contact.setFirstName(line);
	do
	{
		std::cout << "Last name : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.empty());
	contact.setLastName(line);
	do
	{
		std::cout << "Nickname : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.empty());
	contact.setNickname(line);
	do
	{
		std::cout << "Phone number : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.empty());
	contact.setPhoneNumber(line);
	do
	{
		std::cout << "Darkest secret : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.empty());
	contact.setDarkestSecret(line);
	_current_id++;
	std::cout << "Contact succesfully saved" << std::endl;
}

void	PhoneBook::search() const
{
	std::string		line;
	unsigned int	index;

	_printPhoneBook();
	std::cout << "Choose an Index" << std::endl;
	if (std::getline(std::cin, line).good() == false || line.empty())
		return ;
	index = line[0] - '0';
	if (std::isdigit(line[0]) == 0 || line.length() > 1 || index > 7 || index >= _current_id)
	{
		std::cout << "Bad Index" << std::endl;
		return ;
	}
	else
		_contact[index].printContact();
}

void	PhoneBook::_printFormat(const std::string &str) const
{
	std::string s(str);
	if (s.size() > 10)
	{
		s.resize(9);
		s += ".";
	}
	std::cout << std::setw(10) << s << "|";
}

void	PhoneBook::_printPhoneBook() const
{
	std::cout << "  Index   |First name|Last name | Nickname |" << std::endl;
	for (size_t i = 0; i < 8 && i < _current_id; i++)
	{
		std::cout << "         " << i << "|";
		_printFormat(this->_contact[i].getFirstName());
		_printFormat(this->_contact[i].getLastName());
		_printFormat(this->_contact[i].getNickname());
		std::cout << std::endl;
	}
}

/* ************************************************************************** */