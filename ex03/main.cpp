/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:52:20 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/08 12:57:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <stdlib.h>

int main()
{
    {
        MateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter *me = new Character("me");
        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter *bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    {
        Character *character = new Character("character");
        Character *enemy = new Character("enemy");
        MateriaSource *source = new MateriaSource();
        source->learnMateria(new Ice());
        source->learnMateria(new Cure());

        AMateria *ice = source->createMateria("ice");
        AMateria *ice_floor = source->createMateria("ice");
        AMateria *cure = source->createMateria("cure");
        AMateria *cure_clone = cure->clone();

        character->equip(cure);
        character->equip(ice_floor);
        character->unequip(1);

        std::cout << "enemy" << std::endl;

        enemy->equip(ice);
        enemy->equip(cure->clone());
        enemy->equip(cure_clone);

        character->use(0, *enemy);
        enemy->use(0, *character);

        delete character;
        delete enemy;
        delete source;
        delete ice_floor;
    }
    return 0;
}