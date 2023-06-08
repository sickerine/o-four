/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:29:33 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 11:42:50 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal string constructor" << std::endl;
    WrongAnimal::type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal & copy)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = copy;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & copy)
{
    std::cout << "WrongAnimal assignment operator" << std::endl;
    type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "bummer" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}



