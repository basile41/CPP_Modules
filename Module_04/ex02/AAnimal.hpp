/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:56:30 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/23 21:59:23 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		// Constructors
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal(std::string type);
		
		// Destructor
		virtual ~AAnimal();
		
		// Operators
		AAnimal & operator=(const AAnimal &assign);
		
		// Getters / Setters
		std::string	getType() const;

		// Methods
		virtual void	makeSound() const = 0;

	protected:
		std::string _type;
		
};

#endif