/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:56:57 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/07 13:17:53 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {
private:

public:
	Cat();
	Cat(const Cat& otherCat);
	Cat& operator=(const Cat& otherCat);
	~Cat();

	void	makeSound( void ) const;
};

#endif
