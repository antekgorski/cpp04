/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:05:49 by agorski           #+#    #+#             */
/*   Updated: 2025/05/19 18:51:35 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
//const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " ";
j->makeSound();
std::cout << i->getType() << " ";
i->makeSound(); //will output the cat sound!
//std::cout << meta->getType() << " ";
//meta->makeSound();
//delete meta;
delete j;
delete i;

//const WrongAnimal* t = new WrongAnimal();
const WrongAnimal* k = new WrongCat();
std::cout << k->getType() << " ";
k->makeSound(); //will output the WrongCat sound!
//std::cout << t->getType() << " ";
//t->makeSound();
//delete t;
delete k;
return 0;
}
