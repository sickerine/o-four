/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:15:29 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/08 10:16:28 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure default constructor" << std::endl;
}

Cure::~Cure()
{

}
Cure::Cure(const Cure & copy)
{
    *this = copy;
}

Cure &Cure::operator=(const Cure & copy)
{
    type = copy.getType();
    
    return (*this);
}

