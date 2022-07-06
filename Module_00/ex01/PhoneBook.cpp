#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook() : _id(0)
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
void	PhoneBook::addContact()
{
	
}

void	PhoneBook::addContact(	std::string const first_name,
								std::string const last_name,
								std::string const nickname,
								std::string const phone_number,
								std::string const darkest_secret)
{
	_contact[_id % PB_SIZE].setContact(first_name, last_name, nickname, phone_number, darkest_secret);
	this->_id++;
}

static void	print_format(const std::string &str)
{
	if (str.size() > 10)
	{
		for (size_t i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".|";
	}
	else
	{
		for (size_t i = str.size(); i < 10; i++)
		{
			std::cout << " ";
		}
		std::cout << str << "|";
	}
}

void	PhoneBook::printPhoneBook() const
{
	std::cout << "  Index   |First name|Last name | Nickname |" << std::endl;
	for (size_t i = 0; i < 8 && i < _id; i++)
	{
		std::cout << "         " << i << "|";
		print_format(this->_contact[i].getFirstName());
		print_format(this->_contact[i].getLastName());
		print_format(this->_contact[i].getNickname());
		std::cout << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */