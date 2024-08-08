/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:27:41 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/07 13:35:49 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iomanip>
#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:

public:
	AMateria(std::string const & type);
	AMateria(const AMateria& otherAMateria);
	AMateria& operator=(const AMateria& otherAMateria);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
