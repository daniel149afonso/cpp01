/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:59:23 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/09 00:51:56 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <iostream> // std::string
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		//HumanB();
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif


