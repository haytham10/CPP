/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:23:58 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/13 01:23:58 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	this->type = src.type;
	return (*this);
}

Cat::Cat(const Cat &src) : Animal(src){
	*this = src;
}

void Cat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}
