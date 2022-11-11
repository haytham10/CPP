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
	Phonebook	phonebook;
	std::string	input;
	int			i;

	std::cout << "Welcome to the phonebook" << std::endl;
	std::cout << "Please enter a command: " << std::endl;
	i = 0;
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
				if (i == 7)
					i = 0;
				phonebook.ft_add(i++);
			}
			else if (input == "SEARCH")
				phonebook.ft_search(i);
			else
				std::cout << "Invalid command" << std::endl;
		}
		std::cout << "Please enter a command: ";
	}
	return (0);
}