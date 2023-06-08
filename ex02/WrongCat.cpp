/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:49:34 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 11:43:07 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor" << std::endl;
    WrongCat::type = "WrongCat";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat string constructor" << std::endl;
    WrongCat::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor" << std::endl;
    *this = copy;
}

WrongCat & WrongCat::operator=(const WrongCat & copy)
{
    std::cout << "WrongCat assignment operator" << std::endl;
    WrongAnimal::operator=(copy);
    type = copy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "gato" << std::endl;
}
