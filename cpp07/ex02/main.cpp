/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:49:27 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/23 20:54:31 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    unsigned int size = 20;
    Array<int> tab(size);

    for (unsigned int i= 0; i < size; i++)
    {
        tab[i] = 1 + i;
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
    
    Array<int> tab1(15);
    
    tab1 = tab;
    for (unsigned int i = 0; i < size; i++)
    {
        std::cout << tab1[i] << " ";
    }
    std::cout << std::endl;
    
    try
    {
        std::cout << tab[10];
    }
    
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
