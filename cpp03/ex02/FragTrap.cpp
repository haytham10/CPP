/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:39:15 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/11 17:39:15 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is shutting down" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	if (this->_energyPoints < 1)
	{
		std::cout << "FragTrap " << this->_name << " is out of energy" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " gives high fives to everyone" << std::endl;
}
