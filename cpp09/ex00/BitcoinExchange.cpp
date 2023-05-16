/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:03:54 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/08 23:03:54 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->data = rhs.data;
	}
	return (*this);
}

int	BitcoinExchange::loadDb()
{
	std::ifstream file("data.csv");
	std::string line;
	std::string date;
	std::string value;
	int i = 0;

	if (!file.is_open())
		return (-1);

	std::getline(file, line);
	while (std::getline(file, line))
	{
		date = line.substr(0, line.find_first_of(','));
		value = line.substr(line.find_first_of(',') + 1, line.npos);
		double val = std::strtod(value.c_str(), NULL);
		data[date] = val;
		i++;
	}
	file.close();
	return (i);
}

bool check_date(std::string &date, std::string &input)
{
	if (date.size() == 0 || date.size() != 10)
	{
		std::cout << "Error: bad input => " << input << std::endl;
		return (false);
	}
	struct tm tm;
	if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL)
	{
		std::cout << "Error: bad input => " << input << std::endl;
		return (false);
	}
	return (true);
}

double check_value(std::string &value, std::string &input)
{
    if (value.size() == 0)
    {
        std::cout << "Error: bad input => " << input << std::endl;
        return (-1);
    }
    for (size_t i = 0; i < value.size() - 1; i++)
    {
        if (!isdigit(value[i]) && value[i] != '.' && value[i] != '-')
        {
            std::cout << "Error: bad input => " << input << std::endl;
            return (-1);
        }
    }

    double val = std::strtod(value.c_str(), NULL); // strtod converts string to double
    if (val > INT_MAX)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (-1);
    }
    if (val < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (-1);
    }
    return (val);
}


void	BitcoinExchange::searchDb(std::string &date, double value)
{
    std::map<std::string, double>::iterator it = data.upper_bound(date);
    if (it != data.end())
    {
        double result = value * it->second;
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
    else
    {
        std::cout << "Error: no data found for date." << date << std::endl;
    }
}


int BitcoinExchange::loadInput(std::string &input)
{
    std::ifstream file(input.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return -1;
    }

    std::string line;
    std::string delimiter = " | ";
	std::getline(file, line);
    while (std::getline(file, line))
    {
        size_t delimiterPos = line.find(delimiter);
        if (delimiterPos == std::string::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = line.substr(0, delimiterPos);
        if (!check_date(date, line))
            continue;

        std::string value = line.substr(delimiterPos + delimiter.length());
        double val = check_value(value, line);
        if (val < 0)
            continue;

        searchDb(date, val);
    }

    file.close();
    return 0;
}

std::map<std::string, double> BitcoinExchange::getDb() const
{
	return (data);
}