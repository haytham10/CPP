/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:11:26 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/12/30 18:11:26 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
  Zombie();  // Default constructor
  Zombie(std::string name);  // Constructor
  void announce();  // Method to make the zombie announce itself
private:
  std::string name_;  // Name of the zombie
};

#endif  // ZOMBIE_HPP
