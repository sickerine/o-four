/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:06:25 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/08 10:15:27 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
protected:
    std::string type;
public:
    Cure();
    ~Cure();
    Cure(const Cure & copy);
    Cure &operator=(const Cure & copy);
};