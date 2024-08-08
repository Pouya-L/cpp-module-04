/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:14:53 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 17:12:09 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iomanip>
#include <iostream>
#include <string>

// ANSI color codes
#define RESET "\033[0m"
#define BLINK "\033[5M"

// Regular Colors
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

// Bold
#define BOLDBLACK "\033[1;30m"
#define BOLDRED "\033[1;31m"
#define BOLDGREEN "\033[1;32m"
#define BOLDYELLOW "\033[1;33m"
#define BOLDBLUE "\033[1;34m"
#define BOLDPURPLE "\033[1;35m"
#define BOLDCYAN "\033[1;36m"
#define BOLDWHITE "\033[1;37m"

class	Brain {
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(std::string idea);
	Brain(const Brain& otherBrain);
	Brain& operator=(const Brain& otherBrain);
	~Brain();

	void	setNewIdea(int	index, std::string newIdea);
	void	printIdeas(void);
};

#endif
