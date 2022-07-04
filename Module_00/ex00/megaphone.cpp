/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:31:46 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/04 12:08:25 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	str_toupper(char *str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			str_toupper(argv[i]);
			std::cout << argv[i] << std::endl;
		}
	}
}
