/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:42:06 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/03 21:58:38 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1;
	Zombie* zombie2;

	zombie2 = newZombie("Daniel");
	zombie2->announce();
	randomChump("Sakura");
	delete zombie2;
	return (0);
}