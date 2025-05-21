/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:52:12 by agorski           #+#    #+#             */
/*   Updated: 2025/05/21 11:05:13 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    private:
        std::string ideas_[100];
    public:
        Brain();
        Brain(const Brain& other);
        ~Brain();
        Brain& operator=(const Brain& other);
        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
};

# endif