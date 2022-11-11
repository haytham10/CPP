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

using namespace std;

class Phonebook
{
	private:
		class Contact
		{
			public:
				string	f_name;
				string	l_name;
				string	nickname;
				string	number;
				string	darkest_secret;
		};
	public:
		int		n_contacts;
		void	ft_add(int n_contacts)
		{
			Contact cnt[n_contacts];

			cout << "First name: " ;
			cin >> cnt[n_contacts].f_name;
			cout << "Last name: " ;
			cin >> cnt[n_contacts].l_name;
			cout << "Nickname: " ;
			cin >> cnt[n_contacts].nickname;
			cout << "Phone number: " ;
			cin >> cnt[n_contacts].number;
			cout << "Darkest secret: " ;
			cin >> cnt[n_contacts].darkest_secret;
		}
		void	ft_search()
		{
			cout << "SEARCH" << endl;
		}
};

#endif