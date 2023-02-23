/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:49:27 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/23 17:49:27 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<char> a(5);
	char c[5] = {'a', 'b', 'c', 'd', 'e'};

	for (unsigned int i = 0; i < a.getSize(); i++)
	{
		a[i] = c[i];
		std::cout << a[i] << std::endl;
	}

    return 0;
}