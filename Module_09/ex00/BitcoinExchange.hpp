/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:59:44 by bregneau          #+#    #+#             */
/*   Updated: 2023/04/06 15:05:43 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>
#include <functional>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange();

		BitcoinExchange & operator=(BitcoinExchange const & rhs);

		double	getPrice(const std::string & date) const;//return the price of the bitcoin at the given date

		void	addExchangeRate(const std::string &, double exchangeRate);//add a new exchange rate to the history

	private:
		std::map<std::string, double, std::greater<std::string> > _priceHistory;


};