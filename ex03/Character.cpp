/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:29:08 by codespace         #+#    #+#             */
/*   Updated: 2023/06/08 12:20:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(const Character &copy)
{
    *this = copy;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i], inventory[i] = 0;
    }
}

Character::Character(const std::string & name)
{
    Character::name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character &Character::operator=(const Character &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i], inventory[i] = 0;
        if (copy.inventory[i])
            inventory[i] = copy.inventory[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            if (m)
                std::cout << "equipped " << m->getType() << " to " << i << std::endl; 
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        std::cout << "unequipped " << inventory[idx] << " (" << inventory[idx]->getType() << ") from " << idx << " of " << getName() << std::endl;  
        inventory[idx] = 0;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}

