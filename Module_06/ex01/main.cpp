/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:01:45 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/30 14:38:33 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct s_data
{
	void		*ptr;
	int			i;
	char		c;
	double		d;
	std::string	s;
}	Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *data = new Data; 

	std::cout << data << std::endl;
	data = deserialize(serialize(data));
	std::cout << data << std::endl;

	delete data;
}