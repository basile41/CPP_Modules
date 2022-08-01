/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:07:28 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/01 20:56:19 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
typename T::iterator easyfind(T container, int to_find)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
		throw std::exception();
	return it;
}

#endif