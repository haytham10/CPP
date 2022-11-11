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
	string		input;

	cout << "Welcome to the phonebook" << endl;
	cout << "Please enter a command: ";
	phonebook.n_contacts = 0;
	while (1)
	{
		cin >> input;
		if (input == "")
			continue ;
		else
		{
			if (input == "EXIT")
				return (0);
			else if (input == "ADD")
			{
				if (phonebook.n_contacts == 7)
					phonebook.n_contacts = 0;
				phonebook.ft_add(phonebook.n_contacts++);
			}
			else if (input == "SEARCH")
				phonebook.ft_search();
			else
				cout << "Invalid command" << endl;
		}
		cout << "Please enter a command: ";
	}
	return (0);
}