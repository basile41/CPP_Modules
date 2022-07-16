/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:31:22 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 19:31:49 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors
Point::Point() : _x(0), _y(0)
{}
Point::Point(const Point &copy)
{
	*this = copy;
}
Point::Point(Fixed x, Fixed y) : _x(x), _y(y) 
{}
Point::Point(float x, float y) : _x(x), _y(y) 
{}

// Destructor
Point::~Point()
{
}


// Operators
Point & Point::operator=(const Point &assign)
{
	_x = assign.getX();
	_y = assign.getY();
	return *this;
}


// Getters / Setters
Fixed Point::getX() const
{
	return _x;
}
Fixed Point::getY() const
{
	return _y;
}
void Point::setX(Fixed x)
{
	_x = x;
}
void Point::setY(Fixed y)
{
	_y = y;
}
