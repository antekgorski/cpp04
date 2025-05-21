/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:06:34 by agorski           #+#    #+#             */
/*   Updated: 2025/05/21 13:25:06 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type_(type)
{
    std::cout << "AAnimal parameterized constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type_(other.type_)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
        {
            this->type_ = other.type_;
            std::cout << "AAnimal assignment operator called" << std::endl;
        }
    return *this;
}

std::string AAnimal::getType() const
{
    return type_;
}
