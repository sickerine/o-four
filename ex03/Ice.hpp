/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:06:25 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/08 11:15:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
public:
    Ice();
    ~Ice();
    Ice(const Ice & copy);
    Ice &operator=(const Ice & copy);
    AMateria *clone() const;
    void use(ICharacter &target);
};