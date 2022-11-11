/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:13:18 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/11/05 18:30:49 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Phonebook
{
	private:
		class Contact
		{
			public:
				std::string	f_name;
				std::string	l_name;
				std::string	nickname;
				std::string	number;
				std::string	darkest_secret;
		};
	public:
		void	ft_add(int id)
		{
			Contact cnt[id];

			std::cout << "First name: ";
			std::cin >> cnt[id].f_name;
			std::cout << "Last name: ";
			std::cin >> cnt[id].l_name;
			std::cout << "Nickname: ";
			std::cin >> cnt[id].nickname;
			std::cout << "Phone number: ";
			std::cin >> cnt[id].number;
			std::cout << "Darkest secret: ";
			std::cin >> cnt[id].darkest_secret;
			std::cout << "Contact added successfully";
		}
		void	ft_search(int id)
		{
			Contact	cnt[id];
			
			std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;
			std::cout << "----------|----------|----------|----------" << std::endl;
			for (int i = 1; i < id; i++)
			{
				std::cout << std::setw(10) << i << "|";
				std::cout << std::setw(10) << cnt[id].f_name << "|";
				std::cout << std::setw(10) << cnt[id].l_name << "|";
				std::cout << std::setw(10) << cnt[id].nickname << std::endl;
			}
			std::cout << "Please enter the index of the contact you want to see: ";
			std::cin >> id;
			if (id > 7 || id < 0 || isdigit(id) == 0)
				std::cout << "Invalid index" << std::endl;
			else
			{
				std::cout << "First name: " << cnt[id].f_name << std::endl;
				std::cout << "Last name: " << cnt[id].l_name << std::endl;
				std::cout << "Nickname: " << cnt[id].nickname << std::endl;
				std::cout << "Phone number: " << cnt[id].number << std::endl;
				std::cout << "Darkest secret: " << cnt[id].darkest_secret << std::endl;
			}
		}
};

#endif