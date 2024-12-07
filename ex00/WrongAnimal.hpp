/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:17:41 by plashkar          #+#    #+#             */
/*   Updated: 2024/12/07 18:02:12 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iomanip>
#include <iostream>
#include <string>

class	WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& otherWrongAnimal);
	WrongAnimal& operator=(const WrongAnimal& otherWrongAnimal);
	virtual	~WrongAnimal();

	void			makeSound( void ) const;
	std::string		getType( void ) const;

};

#endif
