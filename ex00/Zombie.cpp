/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:00 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/03 23:20:16 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

/*Introduce Zombie with its name*/
void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}


