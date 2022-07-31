/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:20:47 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/31 17:30:48 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>

template<typename T>
void	ft_print(T &var)
{
	std::cout << var << std::endl;
}

template<typename T>
void	ft_double(T &var)
{
	var += var;
}

template<typename T>
void	ft_square(T &var)
{
	var *= var;
}

#endif