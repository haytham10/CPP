/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:12:44 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/12/30 18:12:44 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];  // Allocate an array of N Zombies

	if (N <= 0)
		return NULL;  // Return NULL if N is 0 or negative
	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);  // Initialize each Zombie in the array

	return horde;  // Return a pointer to the first Zombie in the array
}
