/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:40:03 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/04 20:29:41 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	phonebook.addContact("Basile", "Regneau", "bregneau", "0123456789", "non");
	phonebook.addContact("truc", "bidule", "machintrucbidule", "0123456789", "non");
	phonebook.addContact("Basile", "Regneau", "bregneau", "0123456789", "non");
	phonebook.addContact("truc", "bidule", "machintrucbidule", "0123456789", "non");
	phonebook.addContact("Basile", "Regneau", "bregneau", "0123456789", "non");
	phonebook.addContact("truc", "bidule", "machintrucbidule", "0123456789", "non");
	phonebook.addContact("Basile", "Regneau", "bregneau", "0123456789", "non");
	phonebook.addContact("truc", "bidule", "machintrucbidule", "0123456789", "non");
	phonebook.addContact("truc", "bidule", "machintrucbidule", "0123456789", "non");
	phonebook.addContact("Basile", "Regneau", "bregneau", "0123456789", "non");
	phonebook.addContact("truc", "bidule", "machintrucbidule", "0123456789", "non");
	phonebook.printPhoneBook();
}