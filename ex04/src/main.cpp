/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:14:25 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/19 20:33:19 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring> //substr
#include <fstream> //ifstream, ofstream, open,

int	main(int argc, char **argv)
{
	std::ifstream file;
	std::ofstream fileOut("test.replace");
	std::string line;
	std::string word1 = argv[2];
	std::string word2 = argv[3];

	if (argc != 4 || word1.empty() || word2.empty())
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
			int pos = 0;
			pos = line.find(argv[2], pos);
			//Parcours toute la ligne pour trouver les occurences
			while (pos != (int)std::string::npos)
			{
				line = line.substr(0, pos) + word2 + line.substr(pos + word1.length());
				//std::cout << "Occurence trouvé: "<< word1 << " à index: "<< pos << std::endl;
				pos = line.find(word1, pos + word2.length());
				
			}
			std::streampos posCursor = file.tellg(); // position du curseur dans le fichier
			if (posCursor == -1)
			{
				// On est à la fin du fichier (pas de \n après cette ligne)
				fileOut << line;
			}
			else
			{
				// Il reste encore des données → il y avait un \n
				fileOut << line << '\n';
			}
		}
	}
	return (0);
}
