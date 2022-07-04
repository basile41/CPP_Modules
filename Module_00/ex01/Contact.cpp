#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

void	Contact::setContact(std::string first_name,
							std::string last_name,
							std::string nickname,
							std::string phone_number,
							std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

void	Contact::printContact()
{
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "last name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
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

std::string Contact::getFirstName()
{
	return this->first_name;
}

std::string Contact::getLastName()
{
	return this->last_name;
}

std::string Contact::getNickname()
{
	return this->nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret()
{
	return this->darkest_secret;
}

/* ************************************************************************** */