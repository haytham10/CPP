/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:33:56 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/01/01 15:33:56 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "createFile.hpp"

int main(int argc, char* argv[])
{
    // Check if the correct number of arguments were provided
    if (argc != 4)
    {
        std::cerr << "Error: Incorrect number of arguments. Expected 3." << std::endl;
        return 1;
    }

    // Get the input arguments
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Create the output file with the modified content
    if (!createFile(filename, s1, s2))
    {
        std::cerr << "Error: Could not create output file." << std::endl;
        return 1;
    }

    return 0;
}
