/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:36 by bregneau          #+#    #+#             */
/*   Updated: 2023/02/26 17:11:38 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	ft_plus(int &a, int b)
{
	a += b;
	return (0);
}

int	ft_minus(int &a, int b)
{
	a -= b;
	return (0);
}

int	ft_multiplies(int &a, int b)
{
	a *= b;
	return (0);
}

int	ft_divides(int &a, int b)
{
	if (b == 0)
		return (1);
	a /= b;
	return (0);
}

int	ft_do_operation(std::stack<int> &operands, char c)
{
	if (c == ' ')
		return (0);
	if (operands.size() < 2)
		return (1);
	char	type[4] = {'+', '-', '*', '/'};
	int	(*f_op[4])(int&, int) = {ft_plus, ft_minus, ft_multiplies, ft_divides};

	for (int i = 0; i < 4; i++)
	{
		if (c == type[i])
		{
			int tmp = operands.top();
			operands.pop();
			if (!(f_op[i])(operands.top(), tmp))
				return (0);
		}
	}
	return (1);
}