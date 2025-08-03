/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:06 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/03 23:56:23 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie;

	zombie = zombieHorde(-1, "Daniel");
	if (zombie == NULL)
		return (1);
	for (int i = 0; i < 4; i++)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}