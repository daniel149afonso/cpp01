/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:14:25 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/14 20:32:53 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream> //open,

int	main(int argc, char **argv)
{
	std::ifstream file;

	if (argc != 4)
		return (1);
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::perror(argv[1]);
		return (1);
	}
	
	return (0);
}