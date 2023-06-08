/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:55:11 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/08 11:59:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const &type)
{
    AMateria::type = type;
}

AMateria::AMateria(const AMateria & copy)
{
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria & copy)
{
    type = copy.getType();
    
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}
