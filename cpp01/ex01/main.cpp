/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:09:46 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/12/30 18:09:46 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "zombieHorde.hpp"

int main()
{
  // Create a horde of 5 zombies with the name "Zombie 1"
  Zombie *horde = zombieHorde(5, "Zombie 1");
  for (int i = 0; i < 5; i++) {
    horde[i].announce();  // Call announce() on each zombie in the horde
  }
  delete[] horde;  // Delete the horde to avoid memory leaks

  // Create a horde of 3 zombies with the name "Zombie 2"
  horde = zombieHorde(3, "Zombie 2");
  for (int i = 0; i < 3; i++)
    horde[i].announce();  // Call announce() on each zombie in the horde

  delete[] horde;  // Delete the horde to avoid memory leaks

  return 0;
}
