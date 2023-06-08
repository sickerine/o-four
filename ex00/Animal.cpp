/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:29:33 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 11:18:49 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal string constructor" << std::endl;
    Animal::type = type;
}

Animal::Animal(const Animal & copy)
{
    std::cout << "Animal copy constructor" << std::endl;
    *this = copy;
}

Animal & Animal::operator=(const Animal & copy)
{
    std::cout << "Animal assignment operator" << std::endl;
    type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "bummer" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}



