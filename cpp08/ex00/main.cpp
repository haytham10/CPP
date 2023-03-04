/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:50:36 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/03/04 09:50:36 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5 };

    try
    {
        int n = 3;
        int index = easyfind(v, n);
        std::cout << "Found element " << n << " at index " << index << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        int n = 6;
        int index = easyfind(v, n);
        std::cout << "Found element " << n << " at index " << index << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
