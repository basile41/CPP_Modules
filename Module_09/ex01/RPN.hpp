/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:39 by bregneau          #+#    #+#             */
/*   Updated: 2023/02/26 17:11:40 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <functional>


int	ft_plus(int &a, int b);
int	ft_minus(int &a, int b);
int	ft_multiplies(int &a, int b);
int	ft_divides(int &a, int b);
int	ft_do_operation(std::stack<int> &operands, char c);

#endif /* RPN_HPP */
