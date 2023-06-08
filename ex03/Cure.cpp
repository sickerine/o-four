/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:15:29 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/08 11:59:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(const Cure & copy) : AMateria(copy)
{
    *this = copy;
}

Cure &Cure::operator=(const Cure & copy)
{
    type = copy.getType();
    
    return (*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

