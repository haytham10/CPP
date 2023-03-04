/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:54:04 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/03/04 09:54:04 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Element not found");
		}
};

template <typename T>
int easyfind(T &container, int n)
{
	typename T::iterator it; // typename is needed to tell the compiler that T::iterator is a type and not a member of T
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFoundException();
	else
		return (n);
}

#endif
