/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:06:42 by agorski           #+#    #+#             */
/*   Updated: 2025/05/19 16:33:32 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type_;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& other);
        virtual ~Animal();
        Animal& operator=(const Animal& other);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif