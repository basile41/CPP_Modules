/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:08:18 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 20:53:51 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (1);
	}
	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(argv[1]);

	std::string in_str;
	std::string line;

	while (42)
	{
		line.clear();
		infile >> line;
		std::cout << line << std::endl;
		if (line.empty())
			break ;
		in_str += line;
	}
	std::cout << in_str << std::endl;
	infile.close();
	return (0);
}