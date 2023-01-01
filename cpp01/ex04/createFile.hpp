/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createFile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:35:04 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/01/01 15:35:04 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>

// Create a new file with the modified content and return true on success, false on failure
bool createFile(const std::string& filename, const std::string& s1, const std::string& s2);
