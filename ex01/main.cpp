/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:15:05 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/07 12:16:42 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    Animal *animals[10];
    std::cout << "  first half" << std::endl;
    for (int i = 0; i < 5; i++)
        animals[i] = new Cat();
    std::cout << "  second half" << std::endl;
    for (int i = 5; i < 10; i++)
        animals[i] = new Dog();
    std::cout << "  deletion" << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    std::cout << "  deleted" << std::endl;
    return 0;
}