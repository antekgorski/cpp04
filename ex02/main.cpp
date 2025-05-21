/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:05:49 by agorski           #+#    #+#             */
/*   Updated: 2025/05/21 13:22:51 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
// //const AAnimal* meta = new AAnimal();
// const AAnimal* j = new Dog();
// const AAnimal* i = new Cat();
// std::cout << j->getType() << " ";
// j->makeSound();
// std::cout << i->getType() << " ";
// i->makeSound(); //will output the cat sound!
// Cat testBtain;
// testBtain.setBrainIdea(0, "I am a cat");
// std::cout << testBtain.getBrainIdea(0) << std::endl;


//std::cout << meta->getType() << " ";
//meta->makeSound();
//delete meta;
// delete j;
// delete i;

//const WrongAnimal* t = new WrongAnimal();
// const WrongAnimal* k = new WrongCat();
// std::cout << k->getType() << " ";
// k->makeSound(); //will output the WrongCat sound!
// //std::cout << t->getType() << " ";
// //t->makeSound();
// //delete t;
// delete k;

AAnimal* AAnimalArr[10];
for (int i = 0; i < 5; i++)
{
    AAnimalArr[i] = new Dog();
}
for (int i = 5; i < 10; i++)
{
    AAnimalArr[i] = new Cat();
}
for (int i = 0; i < 10; i++)
{
    AAnimalArr[i]->makeSound();
}

for (int i = 0; i < 10; i++)
{
    delete AAnimalArr[i];
}

return 0;
}
