/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:06:25 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/08 11:44:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    Cure(const Cure & copy);
    Cure &operator=(const Cure & copy);
    AMateria *clone() const;
    void use(ICharacter &target);
};