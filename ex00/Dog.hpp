/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:47:17 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 11:19:11 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(std::string type);
        Dog(const Dog & copy);
        Dog& operator=(const Dog & copy);
        void makeSound() const;
};