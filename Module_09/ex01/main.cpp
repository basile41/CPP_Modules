/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:35:04 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/06 20:07:19 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	std::stack<int> operands;

	if (argc != 2)
	{
		std::cout << "Bad number of arguments :" << std::endl;
		std::cout << argv[0] << " <RPN expression>" << std::endl;
		return (0);
	}
	std::string s(argv[1]);
	int i = 0;

	if (s.empty())
	{
		std::cout << "Empty expression" << std::endl;
		return (0);
	}
	while (s[i])
	{
		if (std::isdigit(s[i]))
			operands.push(s[i] - '0');
		else if (ft_do_operation(operands, s[i]))
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
		i++;
	}
	std::cout << operands.top() << std::endl;
	if (operands.size() > 1)
		std::cout << "Warning: stack not empty" << std::endl;
	return (0);
}