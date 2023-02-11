/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:50:15 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/11 16:50:15 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap morgana("Morgana");
    ClapTrap timo("Timo");
    ClapTrap akali("Akali");
    ScavTrap nasus("Nasus");

    morgana.attack("Samira");
    morgana.attack("Zed");
    morgana.attack("Jinx");
    morgana.takeDamage(5);
    timo.takeDamage(9);
    timo.takeDamage(10);
    akali.beRepaired(10);
    akali.takeDamage(19);
    nasus.attack("Lux");
    nasus.takeDamage(99);
    nasus.beRepaired(50);
    nasus.guardGate();
	return (0);
}