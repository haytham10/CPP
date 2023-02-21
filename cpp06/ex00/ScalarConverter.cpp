/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:22:45 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/21 16:22:45 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <climits>

std::string ScalarConverter::str_;
std::string ScalarConverter::type_;

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	*this = src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src)
{
	if (this != &src)
	{
		this->str_ = src.str_;
		this->type_ = src.type_;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::setType(void)
{
	if (isChar())
		type_ = "char";
	else if (isInt())
		type_ = "int";
	else if (isFloat())
		type_ = "float";
	else if (isDouble())
		type_ = "double";
	else
		type_ = "impossible";
}

bool ScalarConverter::isChar()
{
	if (str_.length() != 1)
		return false;
	if (isalpha(str_[0]))
		return true;
	if (str_[0] < 32 || str_[0] == 127)
		return false;
	if (isdigit(str_[0]))
		return false;
	return true;
}

bool ScalarConverter::isInt()
{
    int i = 0;
    if (str_[i] == '+' || str_[i] == '-')
        i++;
    if (str_[0] == '0' && isdigit(str_[1]))
        return (false);
    while (str_[i])
    {
                
        if (isdigit(str_[i]))
            i++;
        else
            return (false);
    }
    return true;
}

bool ScalarConverter::isFloat()
{
    int i = 0;
    bool dot = false;

    if (infF())
        return (true);
    if (str_[i] == '+' || str_[i] == '-')
        i++;
    while(str_[i])
    {
        if (isdigit(str_[i]))
            i++;
        else if (str_[i] == '.' && !dot)
        {
            dot = true;
            i++;
        }
        else
            return (false);
        if (str_[i] && !str_[i + 1])
        {
            if (str_[i] == 'f')
                break;
            else
                return (false);
        }
    }
    if (!dot || str_[i] !='f')
        return (false);
    return (true);
}

bool ScalarConverter::isDouble()
{
    int i = 0;
    bool dot = false;

    if (infD())
        return (true);
    if (str_[i] == '+' || str_[i] == '-')
        i++;
    while(str_[i])
    {
        if (isdigit(str_[i]))
            i++;
        else
            return (false);
        if (str_[i] == '.' && !dot)
        {
            dot = true;
            i++;
        }
        else
            return (false);
    }
    if (!dot)
        return (false);
    return (true);
}

void ScalarConverter::toChar(char c)
{
	std::cout << "char: " << static_cast<char>(c) << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::toInt(const std::string input)
{
	double i;
	i = atoll(input.c_str());
	if (i < CHAR_MIN || i > CHAR_MAX || !isprint(i))
		std::cout << "char: Non Displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverter::toFloat(const std::string input)
{
	double f;
	
	f = atof(input.c_str());
	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (static_cast<float>(f) == f)
		std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
	if (static_cast<float>(f) == static_cast<int>(f))
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(f) << std::endl;
}


void ScalarConverter::toNan(const std::string input)
{
    std::cout<<"char: impossible"<<std::endl;
    std::cout<<"int: impossible"<<std::endl;
    if (input == "nan" || input == "nanf")
    {
        std::cout<<"float: nanf"<<std::endl;
        std::cout<<"double: nan"<<std::endl;
    }
    else if (input == "-inf" || input == "-inff")
    {
        std::cout<<"float: -inff"<<std::endl;
        std::cout<<"double: -inf"<<std::endl;
    }
    else if (input == "+inf" || input == "+inff")
    {
        std::cout<<"float: inff"<<std::endl;
        std::cout<<"double: inf"<<std::endl;
    }
}

bool ScalarConverter::infF()
{
    std::string str(str_);
    if (str.compare("inff") == 0 || str.compare("+inff") == 0 || str.compare("-inff") == 0 || str.compare("nanf") == 0)
        return true;
    return false;
}

bool ScalarConverter::infD()
{
    std::string str(str_);
    if (str.compare("inf") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0 || str.compare("nan") == 0)
        return true;
    return false;
}

void ScalarConverter::convert(const std::string input)
{
	setType();
	if (input.length() > 19)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else if (input == "nan" || input == "+inf" || input == "-inf" || input == "+inff"|| input == "-inff" || input == "nanf")
        toNan(input);
    else if (type_ == "char")
        toChar(input[0]);
    else if(type_ == "int")
        toInt(input);
    else if(type_ == "float")
    {
        if (infF())
            toFloat(input);
        else
        {
            std::cout<<"impossible to conversion"<<std::endl;
            return;
        }
    }
    else if (type_ == "double")
    {
        if (infD())
            toFloat(input);
        else
        {
            std::cout<<"impossible to conversion"<<std::endl;
            return;
        }
    }
    else
        std::cout<<"error input"<<std::endl;
}