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
		void	addContact( std::string const first_name,
							std::string const last_name,
							std::string const nickname,
							std::string const phone_number,
							std::string const darkest_secret);
		void	printPhoneBook() const;

	private:
		Contact			_contact[PB_SIZE];
		unsigned int	_id;

};

#endif /* ******************************************************* PHONEBOOK_H */