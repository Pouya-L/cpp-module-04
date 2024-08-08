/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:30:36 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 14:39:07 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal {
private:

public:
	Dog();
	Dog(const Dog& otherDog);
	Dog& operator=(const Dog& otherDog);
	~Dog();

	void	makeSound( void ) const;
};

#endif
