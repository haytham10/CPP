/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:51:54 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/01/01 14:51:54 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of str: " << &str << std::endl;

	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;

	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	std::cout << "Value of str: " << str << std::endl;

	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;

	std::cout << "Value of stringREF: " << stringREF << std::endl;

	return (0);
}
