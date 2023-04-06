/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:58:42 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/06 15:04:35 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

#include "BitcoinExchange.hpp"

//trim spaces from the beginning and the end of a string
std::string	trim_spaces(std::string str)
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
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		days_in_month[1] = 29;
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > days_in_month[month - 1])
		return (false);
	return (true);
}

bool check_value(std::string str)
{
	std::istringstream iss(str);
	double value;
	iss >> value;
	if (iss.fail() || !iss.eof())
	{
		std::cout << "Error: not a number." << std::endl;
		return (false);
	}
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cout << "Error: value too high." << std::endl;
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

		size_t pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		date = line.substr(0, pos);
		date = trim_spaces(date);
		// check date format
		if (!check_date_format(date))
		{
			std::cout << "Error: bad date format => " << date << std::endl;
			continue ;
		}
		std::string value_str = line.substr(pos + 1);
		// check value
		if (!check_value(value_str))
			continue ;
		value = atof(line.substr(line.find('|') + 1).c_str());
		if (value < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 1000)
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