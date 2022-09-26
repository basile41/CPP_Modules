/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:08:18 by bregneau          #+#    #+#             */
/*   Updated: 2022/09/26 18:05:52 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (1);
	}
	std::ifstream		infile(argv[1]);
	if (infile.fail())
	{
		std::cout << "cannot open file : " << argv[1] << std::endl;
		return (1);
	}
	std::string			replace_file(std::string(argv[1]) + ".replace");
	std::ofstream		outfile(replace_file.c_str());
	if (outfile.fail())
	{
		std::cout << "cannot create file : " << replace_file << std::endl;
		return (1);
	}
	std::stringstream	buffer;
	buffer << infile.rdbuf();
	std::string 		str(buffer.str());
	std::string 		s1(argv[2]);
	std::string 		s2(argv[3]);

	size_t pos = 0;
	if (!s1.empty())
		while (!s1.empty() && (pos = str.find(s1, pos)) != std::string::npos)
		{
			str.erase(pos, s1.length());
			str.insert(pos, s2);
			pos += s2.length();
		}
	outfile << str;
	return (0);
}
