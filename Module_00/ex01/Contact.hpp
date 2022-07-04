#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{

	public:

		Contact();
		~Contact();
		void	setContact(	std::string first_name,
							std::string last_name,
							std::string nickname,
							std::string phone_number,
							std::string darkest_secret);
		void	printContact();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();


	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

};

#endif /* ********************************************************* CONTACT_H */