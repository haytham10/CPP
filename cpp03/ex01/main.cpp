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
	
	Vi.attack("Lux");
	Vi.takeDamage(20);
	Vi.beRepaired(20);
    Vi.guardGate();
	Jinx.attack("Twitch");
	Jinx.takeDamage(15);
	Jinx.beRepaired(30);
	Jinx.guardGate();

	return (0);
}