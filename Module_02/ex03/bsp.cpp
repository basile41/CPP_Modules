/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:45:34 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 17:15:36 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	area( Point const a, Point const b, Point const c )
{
	Fixed p((a + b + c) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	
}