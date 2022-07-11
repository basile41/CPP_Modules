/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:03:21 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/11 17:25:02 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define PB_SIZE 8

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{

	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search() const;
		
	private:
		void	_printFormat(const std::string &str) const;
		void	_printPhoneBook() const;

		Contact			_contact[PB_SIZE];
		unsigned int	_current_id;

};

#endif /* ******************************************************* PHONEBOOK_H */