/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:49:04 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/06 23:29:59 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream> // std::string
# include "HumanA.hpp"
# include "HumanB.hpp"

//Weapon Class
class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const std::string	getType();
		void	setType(std::string type);
};

#endif
