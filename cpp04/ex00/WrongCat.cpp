/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:48:09 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/15 15:48:09 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() 
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) 
{
	this->type = src.type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) 
{
	*this = src;
}

void WrongCat::makeSound() const 
{
	std::cout << "Wrong sound of a cat" << std::endl;
}

WrongCat::~WrongCat() 
{
	std::cout << "WrongCat destructor called" << std::endl;
}