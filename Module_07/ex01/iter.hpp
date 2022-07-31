/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:33:30 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/31 16:15:10 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>

template<typename T>
void	iter(T *tab, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

#endif