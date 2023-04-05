#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
: _priceHistory()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{
		this->_priceHistory = rhs._priceHistory;
	}
	return (*this);
}

double	BitcoinExchange::getPrice(const std::string & date) const
{
	std::map<std::string, double>::const_iterator it = this->_priceHistory.lower_bound(date);
	if (it != this->_priceHistory.end())
		return (it->second);
	return (0);
}

void	BitcoinExchange::addExchangeRate(const std::string & date, double exchangeRate)
{
	this->_priceHistory[date] = exchangeRate;
}

