/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:37:56 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/24 11:08:26 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[])
{
	BitcoinExchange btc;

	int res = btc.loadDb();
	if (btc.getDb().size() == 0)
	{
		std::cout << "Error: empty database." << std::endl;
		return (-1);
	}
	if (res < 0)
	{
		std::cerr << "Error: no database." << std::endl;
		return (-1);
	}
	if (argc < 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (-1);
	}
	std::string input = argv[1];
	if (btc.loadInput(input) < 0)
		return (-1);
}
