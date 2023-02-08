/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createFile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:34:53 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/01/01 15:34:53 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "createFile.hpp"

bool createFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    // Open the input file for reading
    std::ifstream in(filename);
    if (!in.is_open())
    {
        return false;
    }

    // Open the output file for writing
    std::string output_filename = filename + ".replace";
    std::ofstream out(output_filename);
    if (!out.is_open())
    {
        return false;
    }

    // Read the input file line by line, replacing s1 with s2 and writing to the output file
    std::string line;
    while (std::getline(in, line))
    {
        // Find the first occurrence of s1 in the line
        size_t pos = line.find(s1);
        while (pos != std::string::npos)
        {
            // Replace s1 with s2 in the line
			line.erase(pos, s1.length());
			line.insert(pos, s2);
            // Find the next occurrence of s1 in the line
            pos = line.find(s1);
        }

        // Write the modified line to the output file
        out << line << std::endl;
    }

    return true;
}
