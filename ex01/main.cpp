/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:05:49 by agorski           #+#    #+#             */
/*   Updated: 2025/05/21 13:18:50 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
Animal* animalArr[10];
for (int i = 0; i < 5; i++)
{
    animalArr[i] = new Dog();
}
for (int i = 5; i < 10; i++)
{
    animalArr[i] = new Cat();
}
for (int i = 0; i < 10; i++)
{
    animalArr[i]->makeSound();
}

for (int i = 0; i < 10; i++)
{
    delete animalArr[i];
}

return 0;
}
