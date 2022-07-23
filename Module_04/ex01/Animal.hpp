/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:23 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 18:33:02 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		Animal(std::string type);
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);
		
		// Getters / Setters
		std::string	getType() const;

		// Methods
		virtual void	makeSound() const;

	protected:
		std::string _type;
		
};

#endif