/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:18:31 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/13 01:18:31 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src) 
{
  this->type = src.type;
  return (*this);
}

AAnimal::AAnimal(const AAnimal &src) 
{
  *this = src;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
