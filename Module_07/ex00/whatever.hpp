/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:45:08 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/31 15:02:38 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


template<typename T>
void		swap(T & a, T & b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	return (a > b ? a : b);
}

#endif