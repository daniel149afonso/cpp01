/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:14:25 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/20 15:54:32 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring> //substr
#include <fstream> //ifstream, ofstream, open,

int	main(int argc, char **argv)
{
	std::string line;
	std::string nameFile = argv[1];
	std::string word1 = argv[2];
	std::string word2 = argv[3];
	std::ifstream inputFile;
	std::ofstream outputFile((nameFile + ".replace").c_str());

	if (argc != 4 || word1.empty() || word2.empty())
		return (1);
	inputFile.open(argv[1], std::ios::in);
	if (!inputFile.is_open())
	{
		std::perror(argv[1]);
		return (1);
	}
	else
	{
		while (std::getline(inputFile, line))
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
			std::streampos posCursor = inputFile.tellg(); // position du curseur dans le fichier
			if (posCursor == -1)
			{
				// On est à la fin du fichier (pas de \n après cette ligne)
				outputFile << line;
			}
			else
			{
				// Il reste encore des données → il y avait un \n
				outputFile << line << '\n';
			}
		}
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
