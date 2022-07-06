#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{

	public:

		Contact();
		~Contact();
		void	setContact(	std::string const first_name,
							std::string const last_name,
							std::string const nickname,
							std::string const phone_number,
							std::string const darkest_secret);
		void	printContact() const;
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;


	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

};

#endif /* ********************************************************* CONTACT_H */