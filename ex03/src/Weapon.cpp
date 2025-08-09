/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:00 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/08 23:06:52 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon()
{
	this->type = "default";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string Weapon::getType()
{
	return (this->type);
}

