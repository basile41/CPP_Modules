/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:58:42 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/05 23:14:45 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "BitcoinExchange.hpp"

//trim spaces from the beginning and the end of a string
std::string	trim(std::string str)
{
	size_t	start = str.find_first_not_of(" \t ");
	size_t	end = str.find_last_not_of(" \t ");
	return (str.substr(start, end - start + 1));
}

bool check_date_format(std::string date)
{
	if (date.size() != 10)
		return (false);
	if (date[4] != '-' || date[7] != '-')
		return (false);
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue ;
		if (!std::isdigit(date[i]))
			return (false);
	}
	return (true);
}

BitcoinExchange	parse_csv_file(std::string file)
{
	std::ifstream		ifs(file.c_str());
	std::string			line;
	BitcoinExchange		b;

	if (!ifs.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return (b);
	}
	if (std::getline(ifs, line))
	{
		if (line != "date,exchange_rate")
		{
			std::cout << "Error: invalid file" << std::endl;
			return (b);
		}
	}
	while (std::getline(ifs, line))
	{
		std::string		date;
		double			exchange_rate;

		std::stringstream ss(line);

		std::getline(ss, date, ',');
		// check date format
		if (!check_date_format(date))
		{
			std::cout << "Error: invalid file" << std::endl;
			return (b);
		}
		ss >> exchange_rate;
		// check exchange_rate format
		if (ss.fail() || !ss.eof())
		{
			std::cout << "Error: invalid file" << std::endl;
			return (b);
		}
		b.addExchangeRate(date, exchange_rate);

		
	}
	return (b);
}

void parse_file(std::string file, const BitcoinExchange & b)
{
	std::ifstream		ifs(file.c_str());
	std::string			line;

	if (!ifs.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return ;
	}

	if (std::getline(ifs, line))
	{
		if (line != "date | value")
		{
			std::cout << "Error: invalid file" << std::endl;
			return ;
		}
	}
	while (std::getline(ifs, line))
	{
		std::string		date;
		double			value;

		std::stringstream ss(line);

		std::getline(ss, date, '|');
		date = trim(date);
		// check date format
		if (!check_date_format(date))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		ss >> value;
		// check value format
		if (ss.fail() || !ss.eof())
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue; 
		}
		if (value < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 10000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		std::cout << date << " => " << value << " = " << b.getPrice(date) * value << std::endl;
		

	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " [file]" << std::endl;
		return (1);
	}
	BitcoinExchange b = parse_csv_file("data.csv");
	parse_file(argv[1], b);

	return (0);
}