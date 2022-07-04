#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook()
{
	std::cout << "New PhoneBook created" << std::endl;
	id = 0;
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

void	PhoneBook::addContact(	std::string first_name,
								std::string last_name,
								std::string nickname,
								std::string phone_number,
								std::string darkest_secret)
{
	contact[id % PB_SIZE].setContact(first_name, last_name, nickname, phone_number, darkest_secret);
	id++;
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

void	PhoneBook::printPhoneBook()
{
	std::cout << "  Index   |First name|Last name | Nickname |" << std::endl;
	for (size_t i = 0; i < 8 && i < id; i++)
	{
		std::cout << "         " << i << "|";
		print_format(this->contact[i].getFirstName());
		print_format(this->contact[i].getLastName());
		print_format(this->contact[i].getNickname());
		std::cout << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */