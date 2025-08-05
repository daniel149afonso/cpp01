/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:49:04 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/05 16:20:08 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream> // std::string

//Weapon Class
class Weapon
{
	private:
		std::string type;
	public:
		void	getType();
		void	setType(std::string type);
};

#endif
