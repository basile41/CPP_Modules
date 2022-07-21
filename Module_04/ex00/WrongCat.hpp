/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:46:39 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/21 18:51:12 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
# define WrongCAT_HPP

# include <iostream>
# include <string>

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);
		
		// Destructor
		virtual ~WrongCat();
		
		// Operators
		WrongCat & operator=(const WrongCat &assign);
		
		// Methods
		void	makeSound() const;
		
	private:
		
};

#endif