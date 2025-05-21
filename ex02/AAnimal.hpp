/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:06:42 by agorski           #+#    #+#             */
/*   Updated: 2025/05/19 16:33:32 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class AAnimal
{
    protected:
        std::string type_;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& other);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal& other);
        virtual void makeSound() const = 0; // pure virtual function
        std::string getType() const;
};

#endif