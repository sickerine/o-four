/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:53:02 by codespace         #+#    #+#             */
/*   Updated: 2023/06/08 12:12:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i], inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;   
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
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

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = materia;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (inventory[i] && inventory[i]->getType() == type)
        {
            AMateria *clone = inventory[i]->clone();
            std::cout << "created " << clone << " (" << type << ")" << std::endl;
            return (clone);
        }
    return (0);
}
