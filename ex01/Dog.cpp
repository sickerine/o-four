/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:49:34 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 12:09:28 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor" << std::endl;
    Dog::type = "Dog";
    brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog string constructor" << std::endl;
    Dog::type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog & copy) : Animal(copy)
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = copy;
}

Dog & Dog::operator=(const Dog & copy)
{
    std::cout << "Dog assignment operator" << std::endl;
    Animal::operator=(copy);
    type = copy.type;
    brain = copy.brain;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "dddawwwggg" << std::endl;
}

