/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:11:06 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/12/30 18:11:06 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name_("") {}  // Default constructor

Zombie::Zombie(std::string name) : name_(name) {}  // Constructor

void Zombie::announce()
{
  std::cout << "My name is " << name_ << " and I am a zombie!" << std::endl;
}
