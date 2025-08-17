/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:14:25 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/17 23:27:33 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
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
	else
	{
		std::string line;
		
		while (std::getline(file, line))
		{
			std::strstr(line.c_str(), argv[2]);
			std::cout << line << std::endl;
		}
	}
	
	return (0);
}