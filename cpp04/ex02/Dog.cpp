/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:24:41 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/13 01:24:41 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	this->type = src.type;
	return (*this);
}

Dog::Dog(const Dog &src) : AAnimal(src) {
	*this = src;
}

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}
