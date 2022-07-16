/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:05:23 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/16 19:25:37 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	std::cout << "(1.0, 1.0)		" << bsp(Point(0, 0), Point(0, 2), Point(10, 0), Point(1.0, 1.0)) << std::endl;
	std::cout << "(0.0, 0.0)		" << bsp(Point(0, 0), Point(0, 2), Point(10, 0), Point(0.0, 0.0)) << std::endl;
	std::cout << "(0.1, 0.1)		" << bsp(Point(0, 0), Point(0, 2), Point(10, 0), Point(0.1, 0.1)) << std::endl;
	std::cout << "(-1.0, -1.0)		" << bsp(Point(0, 0), Point(0, 2), Point(10, 0), Point(-1.0, -1.0)) << std::endl;
	std::cout << "(20.0, -0.5)))  	" << bsp(Point(0, 0), Point(0, 2), Point(10, 0), Point(20.0, -0.5)) << std::endl;
	std::cout << "(5.0, 1.0)		" << bsp(Point(0, 0), Point(0, 2), Point(10, 0), Point(5.0, 1.0)) << std::endl;
	std::cout << "(5.0, 0.9)		" << bsp(Point(0, 0), Point(0, 2), Point(10, 0), Point(5.0, 0.9)) << std::endl;
	return 0;
}
