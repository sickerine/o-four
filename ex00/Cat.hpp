/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:47:17 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 11:18:31 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        ~Cat();
        Cat(std::string type);
        Cat(const Cat & copy);
        Cat& operator=(const Cat & copy);
        void makeSound() const;
};