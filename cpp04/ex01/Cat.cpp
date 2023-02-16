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
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) 
{
	if (this != &src)
        this->type = src.type;
    delete this->_brain;
    this->_brain = new Brain();
    *this->_brain = *src._brain;
    return (*this);
}

Cat::Cat(const Cat &src) : Animal(src){
	this->_brain = new Brain();
	this->type = src.type;
}

void Cat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}
