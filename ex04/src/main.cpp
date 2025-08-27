/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:14:25 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/27 13:15:17 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring> //substr
#include <fstream> //ifstream, ofstream, open,

int	main(int argc, char **argv)
{
	std::string line;
	std::string nameFile;
	std::string search;
	std::string replace;
	std::ifstream inputFile;
	std::ofstream outputFile;

	if (argc != 4 || !argv[2] || !argv[3])
	{
		std::cerr << "Argument required: [file.txt] [occurence] [replace]\n";
		return (1);
	}
	nameFile = argv[1];
	search = argv[2];
	replace = argv[3];
	if (nameFile.empty() || search.empty() || replace.empty()) 
	{
		std::cerr << "Arguments cannot be empty\n";
		return 1;
	}
	inputFile.open(nameFile.c_str(), std::ios::in);
	if (!inputFile.is_open())
	{
		std::perror(nameFile.c_str());
		return (1);
	}
	outputFile.open((nameFile + ".replace").c_str());
	while (std::getline(inputFile, line))
	{
		int pos = 0;
		pos = line.find(search, pos);
		while (pos != (int)std::string::npos)
		{
			line = line.substr(0, pos) + replace + line.substr(pos + search.length());
			pos = line.find(search, pos + replace.length());
		}
		std::streampos posCursor = inputFile.tellg();
		if (posCursor == -1)
			outputFile << line;
		else
			outputFile << line << '\n';
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
