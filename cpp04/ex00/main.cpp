/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:13:55 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/13 01:13:55 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Dog : public Animal {
public:
  Dog() {
    type = "Dog";
  }
  void makeSound() const override {
    std::cout << "Woof woof" << std::endl;
  }
};

class Cat : public Animal {
public:
  Cat() {
    type = "Cat";
  }
  void makeSound() const override {
    std::cout << "Meow meow" << std::endl;
  }
};

class WrongAnimal : public Animal {
};

class WrongCat : public WrongAnimal {
};

int main() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << std::endl;
  std::cout << i->getType() << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  const WrongAnimal* wrongMeta = new WrongAnimal();
  const WrongAnimal* wrongCat = new WrongCat();
  std::cout << wrongCat->getType() << std::endl;
  wrongCat->makeSound();
  wrongMeta->makeSound();

  delete meta;
  delete j;
  delete i;
  delete wrongMeta;
  delete wrongCat;

  return 0;
}
