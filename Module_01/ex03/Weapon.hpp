/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:12:19 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 19:56:15 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon( std::string type );
		~Weapon();
		const std::string &getType( void ) const;
		void setType( std::string type );
	private:
		std::string _type;
};

#endif
