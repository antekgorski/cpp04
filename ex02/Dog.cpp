/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:07:27 by agorski           #+#    #+#             */
/*   Updated: 2025/05/21 12:03:23 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->brain_ = new Brain();
    this->type_ = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    this->brain_ = new Brain();
    std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain_ = new Brain(*other.brain_);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->brain_;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assigment operator called" << std::endl;
    if (this != &other)
    {
        this->type_ = other.type_;
        Brain* Tempbrain_ = new Brain(*other.brain_);
        delete this->brain_;
        this->brain_ = Tempbrain_;
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

void Dog::setBrainIdea(int index, const std::string& idea)
{
    this->brain_->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const
{
    return this->brain_->getIdea(index);
}
