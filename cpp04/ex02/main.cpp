/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:43:42 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/15 16:43:42 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() 
{
	// Create an array of 10 Animal objects
	const int num_aanimal = 10;
	AAnimal* aanimal[num_aanimal];
	for (int i = 0; i < num_aanimal; i++) {
		if (i % 2 == 0) {
			aanimal[i] = new Dog();
		} else {
			aanimal[i] = new Cat();
		}
	}

	// Delete the aanimal
	for (int i = 0; i < num_aanimal; i++) {
		delete aanimal[i];
	}

	return 0;
}