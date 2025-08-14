/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:00 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/14 17:53:17 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*Default constructor*/
Zombie::Zombie()
{
	this->name = "unknown";
}

/*Constructor*/
Zombie::Zombie(std::string name){
	this->name = name;
}

/*Destructor*/
Zombie::~Zombie(){
	std::cout << this->name << ": Destructor called\n";
}

/*Set Name of Zombie*/
void	Zombie::setName(std::string name){
	this->name = name;
}

/*Introduce Zombie with its name*/
void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

