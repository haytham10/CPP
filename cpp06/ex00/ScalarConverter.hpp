/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:59:01 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/21 14:59:01 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{
	private:
		static std::string str_;
		static std::string type_;
		ScalarConverter();
		ScalarConverter(const ScalarConverter& src);

	public:
		ScalarConverter& operator=(const ScalarConverter& src);
		~ScalarConverter();

		static void convert(const std::string input);

		static void setType();

		static bool infD(void);
		static bool infF(void);

		static bool isChar();
		static bool isInt();
		static bool isFloat();
		static bool isDouble();

		static void toChar(char c);
		static void toInt(std::string str);
		static void toFloat(std::string str);
		static void toNan(std::string str);
};

#endif