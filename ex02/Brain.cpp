/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:53:09 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 12:09:36 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(std::string ideas[100])
{
    std::cout << "Brain string constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        Brain::ideas[i] = ideas[i];
}

Brain::Brain(const Brain & copy)
{
    std::cout << "Brain copy constructor" << std::endl;
    *this = copy;
}

Brain & Brain::operator=(const Brain & copy)
{
    std::cout << "Brain assignment operator" << std::endl;
    for (int i = 0; i < 100; i++)
        Brain::ideas[i] = copy.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}