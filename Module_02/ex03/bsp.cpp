/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bspoint.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:45:34 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 18:43:22 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// https://stackoverflow.com/questions/13300904/determine-whether-point-lies-inside-triangle

static Fixed alpha_beta(Point a, Point b, Point const c, Point const p)
{
	return  (((b.getY() - c.getY())*(p.getX() - c.getX()) + (c.getX() - b.getX())*(p.getY() - c.getY())) /
        ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed alpha = alpha_beta(a, b, c, point);
	Fixed beta = alpha_beta(b, a, c, point);
	Fixed gamma = Fixed(1.0f) - alpha - beta;
	if (alpha > 0 && beta > 0 && gamma > 0)
		return (true);
	return (false);
}
