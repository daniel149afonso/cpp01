/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:06 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/14 17:44:37 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*Stack obj non-alloué*/
/*Heap obj alloué dynamiquement*/
int	main(void)
{
	Zombie* zombie;

	zombie = newZombie("heapZombie");
	zombie->announce();
	randomChump("stackZombie");
	delete zombie;
	return (0);
}