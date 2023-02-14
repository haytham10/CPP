/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:50:15 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/14 15:22:15 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Vi("Vi");
	ScavTrap Jinx("Jinx");
	
	Vi.attack("Jinx");
	Jinx.takeDamage(20);
	Jinx.attack("Vi");
	
	// ScavTrap Vi("Vi");
	// ScavTrap Zed("Zed");
	// ScavTrap Lux("Lux");
	// ScavTrap Jinx("Jinx");

    // Vi.attack("Lux");
    // Vi.attack("Zed");
    // Vi.attack("Jinx");
    // Vi.takeDamage(50);
	// Zed.takeDamage(20);
	// Jinx.takeDamage(55);
	// Lux.takeDamage(150);
	// Vi.beRepaired(20);
    // Vi.guardGate();
	return (0);
}