/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:10:16 by agorski           #+#    #+#             */
/*   Updated: 2025/05/19 18:54:20 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type_ = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type_ = type;
    std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type_(other.type_)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal assigment operator called" << std::endl;
    if (this != &other)
    {
        this->type_ = other.type_;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type_;
}