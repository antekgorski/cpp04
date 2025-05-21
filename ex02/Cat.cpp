/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:44:55 by agorski           #+#    #+#             */
/*   Updated: 2025/05/21 12:03:08 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->brain_ = new Brain();
    this->type_ = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->brain_ = new Brain();
    std::cout << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->brain_ = new Brain(*other.brain_);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->brain_;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assigment operator called" << std::endl;
    if (this != &other)
    {
        this->type_ = other.type_;
        Brain* Tempbrain_ = new Brain(*other.brain_);
        delete this->brain_;
        this->brain_ = Tempbrain_;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miau miau!" << std::endl;
}

std::string Cat::getType() const
{
    return this->type_;
}

void Cat::setBrainIdea(int index, const std::string& idea)
{
    this->brain_->setIdea(index, idea);
}

std::string Cat::getBrainIdea(int index) const
{
    return this->brain_->getIdea(index);
}
