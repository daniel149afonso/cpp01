/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:06 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/14 17:53:08 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*Array of zombies*/
int	main(void)
{
	int		N = 4;
	Zombie*	horde;

	horde = zombieHorde(N, "Daniel");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}