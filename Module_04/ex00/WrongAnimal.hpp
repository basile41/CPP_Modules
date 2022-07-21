/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:46:14 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 18:47:04 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongANIMAL_HPP
# define WrongANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(std::string type);
		
		// Destructor
		~WrongAnimal();
		
		// Operators
		WrongAnimal & operator=(const WrongAnimal &assign);
		
		// Getters / Setters
		std::string	getType() const;

		// Methods
		void	makeSound() const;

	protected:
		std::string _type;
		
};

#endif