/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:14:25 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/17 23:52:03 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream> //open,

int	main(int argc, char **argv)
{
	std::ifstream file;
	std::string line;

	if (argc != 4)
		return (1);
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::perror(argv[1]);
		return (1);
	}
	else
	{
		while (std::getline(file, line))
		{
			if (line.find(argv[2]))
			{
				
				std::cout << "Occurence trouvé: "<< argv[2] << std::endl;
			}
		}
	}
	return (0);
}