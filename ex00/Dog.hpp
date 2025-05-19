/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:45:06 by agorski           #+#    #+#             */
/*   Updated: 2025/05/19 18:25:01 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        ~Dog();
        Dog& operator=(const Dog& other);
        void makeSound() const;
        std::string getType() const;
};

#endif
