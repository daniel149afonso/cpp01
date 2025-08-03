/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:49:04 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/03 23:53:37 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string.h>
# include <iostream> // std::string

//Zombie Class
class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		
		void	setName(std::string name);	
		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif


// Constructor default
// Zombie() :name("unamed")
// {
// 	std::cout << "Hello" << std::endl;
// }

// Constructor personalisé
// Zombie(std::string name)
// {
// 	this->name = name;
// 	std::cout << name << std::endl;
// }