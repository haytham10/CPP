/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:01:53 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/23 17:01:53 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>

void print( T const & x ) 
{
    std::cout << x << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);  // prints "1 2 3 4 5 "

	double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(arr2, 5, print);  // prints "1.1 2.2 3.3 4.4 5.5 "

	char arr3[] = {'a', 'b', 'c', 'd', 'e'};
	iter(arr3, 5, print);  // prints "a b c d e "

    return 0;
}