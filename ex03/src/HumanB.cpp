/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:59:23 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/11 15:57:11 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::attack()
{
	std::cout << this->name <<" attacks with their " 
	<< this->weapon->getType() << std::endl;
	
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}


