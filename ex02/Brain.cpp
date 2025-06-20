/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:52:07 by agorski           #+#    #+#             */
/*   Updated: 2025/05/21 11:06:32 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        this->ideas_[i] = other.ideas_[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
        {
            for ( int i = 0; i > 100; i++)
                this->ideas_[i] = other.ideas_[i];
        }
    std::cout << "Brain assignment operator called" << std::endl;
    return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        this->ideas_[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return this->ideas_[index];
    return "";
}
