/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:06:05 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/29 23:13:30 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <sstream>

#define INT_MAX std::numeric_limits<int>::max()
#define INT_MIN std::numeric_limits<int>::min()

typedef struct s_types
{
	char	c;
	int		i;
	float	f;
	double	d;
}	t_types;


bool	ft_is_char(std::string const &s)
{
	if (s.size() == 3 && s[0] == '\'' && s[2] == '\'' )
		return true;
	return false;
}

bool	ft_is_int(std::string const &s)
{
	int i = 0;
	std::istringstream ss(s);
	ss >> i;
	if (ss.eof() && !ss.fail())
		return true;
	return false;
}

bool	ft_is_float(std::string const &s)
{
	if (!s.compare("inff") || !s.compare("-inff") || !s.compare("+inff") || !s.compare("nanf"))
		return true;
	std::string str(s);
	if (str[str.size() - 1] != 'f')
		return false;
	str.erase(str.size() - 1);
	float	f = 0;
	std::istringstream ss(str);
	ss >> f;
	if (ss.eof() && !ss.fail())
		return true;
	return false;
}

bool	ft_is_double(std::string const &s)
{
	if (!s.compare("inf") || !s.compare("-inf") || !s.compare("+inf") || !s.compare("nan"))
		return true;
	double d = 0;
	std::istringstream ss(s);
	ss >> d;
	if (ss.eof() && !ss.fail())
		return true;
	return false;
}

// bool	ft_is_int(std::string const &s)
// {
// 	std::string str(s);
// 	if (s[0] == '-' || s[1] == '+')
// 		str.erase(0, 1);
// 	if (str.empty() || str.size() > 10)
// 		return false;
// 	for (size_t i = 0; i < str.size(); i++)
// 	{
// 		if (!isdigit(str[i]))
// 			return false;
// 	}
// 	if (atol(s.c_str()) > INT_MAX || atol(s.c_str()) < INT_MIN)
// 		return false;
// 	return true;
// }

// bool	ft_is_double(std::string const &s)
// {
// 	if (!s.compare("-inf") || !s.compare("+inf") || !s.compare("nan"))
// 		return true;
// 	std::string str(s);
// 	if (s[0] == '-' || s[1] == '+')
// 		str.erase(0, 1);
// 	size_t dot;
// 	if ((dot = str.find('.')) != str.npos)
// 		str.erase(dot, 1);
// 	else
// 		return false;
// 	if (str.empty())
// 		return false;
// 	for (size_t i = 0; i < str.size(); i++)
// 	{
// 		if (!isdigit(str[i]))
// 			return false;
// 	}
// 	return true;
// }

// bool	ft_is_float(std::string const &s)
// {
// 	std::string str(s);
// 	if (str[str.size() - 1] != 'f')
// 		return false;
// 	str.erase(str.size() - 1);
// 	return (ft_is_double(str));
// }

void	ft_print_types(t_types *t)
{
	std::cout	<< "char: ";
	if (t->f != t->f || t->f >= 128.0f || t->f <= -129.0f)
		std::cout << "impossible\n";
	else if (std::isprint(t->c))
		std::cout << "'" << t->c << "'" << "\n";
	else
		std::cout << "Non displayable\n";

	std::cout	<< "int: ";
	if (t->f != t->f || t->d >= 2147483648.0 || t->d <= -2147483648.0)
		std::cout << "impossible\n";
	else
		std::cout << t->i << "\n";

	std::cout	<< "float: " << static_cast<float>(t->f) << "\n"
				<< "double: " << t->d << std::endl;
}

void	ft_cast_char(std::string const &s, t_types *t)
{
	t->c = s[1];
	t->i = static_cast<int>(t->c);
	t->f = static_cast<float>(t->c);
	t->d = static_cast<double>(t->c);
}

void	ft_cast_int(std::string const &s, t_types *t)
{
	// std::stringstream ss(s);
	std::stringstream(s) >> t->i;
	// t->i = std::atoi(s.c_str());
	t->c = static_cast<char>(t->i);
	t->f = static_cast<float>(t->i);
	t->d = static_cast<double>(t->i);
}

void	ft_cast_float(std::string const &s, t_types *t)
{
	t->f = static_cast<float>(std::atof(s.c_str()));
	t->c = static_cast<char>(t->f);
	t->i = static_cast<int>(t->f);
	t->d = static_cast<double>(t->f);
}

void	ft_cast_double(std::string const &s, t_types *t)
{
	t->d = std::atof(s.c_str());
	t->c = static_cast<char>(t->d);
	t->i = static_cast<int>(t->d);
	t->f = static_cast<float>(t->d);
}

void	ft_convert_type(std::string const &s)
{
	t_types	t;
	bool	(*ftypes[4])(std::string const &s) = {ft_is_char, ft_is_int, ft_is_float, ft_is_double};
	void	(*fcasts[4])(std::string const &s, t_types *t) = {ft_cast_char, ft_cast_int, ft_cast_float, ft_cast_double};
	std::string stab[4] = {"char", "int", "float", "double"};

	for (int i = 0; i < 4; i++)
	{
		if (ftypes[i](s))
		{
			fcasts[i](s, &t);
			ft_print_types(&t);
			return ;
		}
	}
	std::cout << "Impossible conversion" << std::endl; 
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Bad arguments number" << std::endl;
		return 1; 
	}
	std::string arg(argv[1]);

	ft_convert_type(arg);
	
	return 0;
}