/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:06 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/04 00:26:57 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie;

	zombie = newZombie("heapZombie");
	zombie->announce();
	randomChump("stackZombie");
	delete zombie;
	return (0);
}