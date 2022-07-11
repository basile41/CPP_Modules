/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:03:24 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/11 17:25:07 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{

	public:
		Contact();
		~Contact();
		void	printContact() const;
		void	setContact(	std::string const first_name,
							std::string const last_name,
							std::string const ,
							std::string const phone_number,
							std::string const darkest_secret);
		void setFirstName(std::string const first_name);
		void setLastName(std::string const last_name);
		void setNickname(std::string const nickname);
		void setPhoneNumber(std::string const phone_number);
		void setDarkestSecret(std::string const darkest_secret);
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