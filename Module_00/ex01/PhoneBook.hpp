#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define PB_SIZE 8

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{

	public:

		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	addContact( std::string first_name,
							std::string last_name,
							std::string nickname,
							std::string phone_number,
							std::string darkest_secret);
		void	printPhoneBook();

	private:
		Contact			contact[PB_SIZE];
		unsigned int	id;

};

#endif /* ******************************************************* PHONEBOOK_H */