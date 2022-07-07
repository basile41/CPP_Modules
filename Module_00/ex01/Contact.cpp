/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:03:17 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/07 17:41:19 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact()
: _first_name(""), _last_name(""), _nickname(""), _phone_number(""), _darkest_secret("")
{
}

void	Contact::printContact() const
{
	std::cout << "First name : " << this->_first_name << std::endl;
	std::cout << "last name : " << this->_last_name << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_phone_number << std::endl;
	std::cout << "Darkest secret : " << this->_darkest_secret << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Contact::~Contact()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void	Contact::setContact(std::string const first_name,
							std::string const last_name,
							std::string const nickname,
							std::string const phone_number,
							std::string const darkest_secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}

void Contact::setFirstName(std::string const first_name)
{
	this->_first_name = first_name;
}
void Contact::setLastName(std::string const last_name)
{
	this->_last_name = last_name;
}
void Contact::setNickname(std::string const nickname)
{
	this->_nickname = nickname;
}
void Contact::setPhoneNumber(std::string const phone_number)
{
	this->_phone_number = phone_number;
}
void Contact::setDarkestSecret(std::string const darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() const
{
	return this->_first_name;
}
std::string Contact::getLastName() const
{
	return this->_last_name;
}
std::string Contact::getNickname() const
{
	return this->_nickname;
}
std::string Contact::getPhoneNumber() const
{
	return this->_phone_number;
}
std::string Contact::getDarkestSecret() const
{
	return this->_darkest_secret;
}

/* ************************************************************************** */