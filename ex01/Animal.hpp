/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:29:33 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 11:39:25 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        Animal(const Animal & copy);
        Animal& operator=(const Animal & copy);
        virtual void makeSound() const;
        std::string getType() const;
};