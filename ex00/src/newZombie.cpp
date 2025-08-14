/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:59:23 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/14 17:44:50 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie* zombie;

	if (name.empty())
		name = "unknown";
	zombie = new Zombie(name);
	return (zombie);
}
