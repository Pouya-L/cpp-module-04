/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:02:42 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/08 16:48:25 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria {
private:
ls
public:
	Ice();
	Ice(const Ice& otherIce);
	Ice& operator=(const Ice& otherIce);
	~Ic();

	AMateria*	clone() const;
	void		use(ICharacter& target)
};
