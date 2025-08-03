/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:49:04 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/03 18:07:50 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <stdlib.h>
# include <string.h>
# include <iostream> // std::string

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(){
			this->name = "unknown";
			std::cout << this->name << std::endl;
		}
		Zombie(std::string name){
			this->name = name;
		}
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
		void	announce(void);
};
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
#endif
