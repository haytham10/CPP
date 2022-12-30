/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:31:59 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/12/30 17:31:59 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main() 
{
    Zombie* zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;

    randomChump("Bar");

    return 0;
}
