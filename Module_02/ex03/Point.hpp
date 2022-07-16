/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:31:13 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 16:39:08 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point();
		Point(const Point &copy);
		Point(Fixed x, Fixed y);
		Point(float x, float y);
		
		// Destructor
		~Point();
		
		// Operators
		Point & operator=(const Point &assign);
		
		// Getters / Setters
		Fixed getX() const;
		Fixed getY() const;
		void setX(Fixed x);
		void setY(Fixed y);
		
	private:
		Fixed _x;
		Fixed _y;
		
};

#endif