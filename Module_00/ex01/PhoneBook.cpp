/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:03:13 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/07 19:44:07 by bregneau         ###   ########.fr       */
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
	} while (line.size() == 0);
	contact.setFirstName(line);
	do
	{
		std::cout << "Last name : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.size() == 0);
	contact.setLastName(line);
	do
	{
		std::cout << "Nickname : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.size() == 0);
	contact.setNickname(line);
	do
	{
		std::cout << "Phone number : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.size() == 0);
	contact.setPhoneNumber(line);
	do
	{
		std::cout << "Darkest secret : " << std::endl;
		if (std::getline(std::cin, line).good() == false)
			break ;
	} while (line.size() == 0);
	contact.setDarkestSecret(line);
	_current_id++;
	
}

void	PhoneBook::search() const
{
	std::string		line;
	unsigned int	index;

	_printPhoneBook();
	std::cout << "Choose an Index" << std::endl;
	do
	{
		std::getline(std::cin, line);
		index = line[0] - '0';
		if ((index > 7 || index >= _current_id) || std::isdigit(line[0] == 0))
		{
			std::cout << "Bad Index" << std::endl;
			line.clear();
		}
	} while (line.empty());
	_contact[index].printContact();
}

// void	PhoneBook::addContact(	std::string const first_name,
// 								std::string const last_name,
// 								std::string const nickname,
// 								std::string const phone_number,
// 								std::string const darkest_secret)
// {
// 	_contact[_current_id % PB_SIZE].setContact(first_name, last_name, nickname, phone_number, darkest_secret);
// 	this->_current_id++;
// }

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

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */