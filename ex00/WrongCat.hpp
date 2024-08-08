/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:33:28 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 15:37:57 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
private:

public:
	WrongCat();
	WrongCat(WrongCat& otherWrongCat);
	WrongCat& operator=(WrongCat& otherWrongCat);
	~WrongCat();

	void	makeSound( void ) const;
};

#endif
