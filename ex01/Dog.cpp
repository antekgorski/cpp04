/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:07:27 by agorski           #+#    #+#             */
/*   Updated: 2025/05/19 18:25:42 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type_ = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assigment operator called" << std::endl;
    if (this != &other)
    {
        this->type_ = other.type_;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Hau hau!" << std::endl;
}

std::string Dog::getType() const
{
    return this->type_;
}