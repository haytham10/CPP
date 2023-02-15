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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() 
{
    // Create an array of 10 Animal objects
    const int num_animals = 10;
    Animal* animals[num_animals];
    for (int i = 0; i < num_animals; i++) {
        if (i % 2 == 0) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    // Delete the animals
    for (int i = 0; i < num_animals; i++) {
        delete animals[i];
    }

    return 0;
}