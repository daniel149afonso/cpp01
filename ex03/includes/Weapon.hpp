/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:49:04 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/07 15:38:20 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream> // std::string

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		const std::string	getType();
		void	setType(std::string type);
};

#endif
