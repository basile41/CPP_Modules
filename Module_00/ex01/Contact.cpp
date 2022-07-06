#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact()
: _first_name(""), _last_name(""), _nickname(""), _phone_number(""), _darkest_secret("")
{
	// this->first_name = "";
	// this->last_name = "";
	// this->nickname = "";
	// this->phone_number = "";
	// this->darkest_secret = "";
}

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