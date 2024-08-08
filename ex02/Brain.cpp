/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:18:09 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 17:13:08 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default Constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain: Constructor with input called" << std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = idea;
	}
}

Brain::Brain(const Brain& otherBrain)
{
	*this = otherBrain;
	std::cout << "Brain: Copy constructor with input called" << std::endl;
}

Brain&	Brain::operator=(const Brain& otherBrain)
{
	if (this != &otherBrain) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = otherBrain._ideas[i];
		std::cout << "Brain: Assignment operator called" << std::endl;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Deconstructor called" << std::endl;
}

void	Brain::setNewIdea(int index, std::string newIdea)
{
	if (index < 0 || index > 100)
		std::cout	<< RED << "Error: setNewIdea index out of range" << RESET << std::endl;
	else
		_ideas[index] = newIdea;
}

void	Brain::printIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << ": " << _ideas[i] << std::endl;
	}
}
