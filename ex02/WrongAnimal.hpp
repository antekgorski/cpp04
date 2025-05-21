/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:10:10 by agorski           #+#    #+#             */
/*   Updated: 2025/05/19 18:53:46 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIAL_HPP
# define WRONGANIAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type_;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& other);
        void makeSound() const;
        std::string getType() const;
};

#endif
