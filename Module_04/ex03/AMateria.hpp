/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:10:18 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/24 21:42:02 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class AMateria
{
	public:
		// Constructors
		AMateria();
		AMateria(std::string type);
		AMateria(const AMateria &copy);
		
		// Destructor
		virtual ~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);
		
		// Getters / Setters
		std::string const &	getType() const;
		
		// Methods
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string _type;

	private:
		
};

#endif