/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:49:34 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 11:18:57 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor" << std::endl;
    Cat::type = "Cat";
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat string constructor" << std::endl;
    Cat::type = "Cat";
}

Cat::Cat(const Cat & copy) : Animal(copy)
{
    std::cout << "Cat copy constructor" << std::endl;
    *this = copy;
}

Cat & Cat::operator=(const Cat & copy)
{
    std::cout << "Cat assignment operator" << std::endl;
    Animal::operator=(copy);
    type = copy.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "gato" << std::endl;
}
