/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:42:26 by codespace         #+#    #+#             */
/*   Updated: 2023/06/08 11:44:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *inventory[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource & copy);
        MateriaSource & operator=(const MateriaSource & copy);
        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const & type);
};