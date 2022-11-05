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

class phonebook
{
	private:
		class contact
		{
			public:
				char *first_name;
				char *last_name;
				char *nickname;
				char *number;
				char *darkest_secret;
		};
	public:
		int		i;
		contact	contacts[7];
		void	ft_add(int i)
		{
			std::cout << "First name: ";
			std::cin >> contacts[i].first_name;
			std::cout << "Last name: ";
			std::cin >> contacts[i].last_name;
			std::cout << "Nickname: ";
			std::cin >> contacts[i].nickname;
			std::cout << "Phone number: ";
			std::cin >> contacts[i].number;
			std::cout << "Darkest secret: ";
			std::cin >> contacts[i].darkest_secret;
		}
		void	ft_search()
		{
			std::cout << "SEARCH" << std::endl;
		}
};

#endif