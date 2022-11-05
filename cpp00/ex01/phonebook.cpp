/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:17:03 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/11/05 18:30:27 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	phonebook	phonebook;
	std::string	input;

	std::cout << "Welcome to the phonebook" << std::endl;
	std::cout << "Please enter a command: ";
	phonebook.i = 0;
	while (1)
	{
		std::cin >> input;
		if (input == "")
			continue ;
		else
		{
			if (input == "EXIT")
				return (0);
			else if (input == "ADD")
			{
				if (phonebook.i == 7)
					phonebook.i = 0;
				phonebook.ft_add(phonebook.i++);
			}
			else if (input == "SEARCH")
				phonebook.ft_search();
			else
				std::cout << "Invalid command" << std::endl;
		}
		std::cout << "Welcome to the phonebook" << std::endl;
		std::cout << "Please enter a command: ";
	}
	return (0);
}