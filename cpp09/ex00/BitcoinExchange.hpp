/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:38:55 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/08 22:38:55 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <cstdlib>
#include <string>
#include <limits.h>
#include <ctime>

class BitcoinExchange
{
	private:
		std::map<std::string, double> data;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		~BitcoinExchange();

		int 	loadDb();
		int 	loadInput(std::string &input);
		void	searchDb(std::string &date, double value);
		std::map<std::string, double> getDb() const;
};

#endif