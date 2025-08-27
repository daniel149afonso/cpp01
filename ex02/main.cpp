/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:19:33 by daniel149af       #+#    #+#             */
/*   Updated: 2025/08/27 13:33:52 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*Pointeur (stringPTR): variable qui contient une adresse. */
/*Référence (stringREF): alias fixe, pas réassignable,
toujours lié à l’objet initial.*/
int	main()
{
	std::string	value = "HI THIS IS value";
	std::string	*stringPTR = &value;
	std::string& stringREF = value;

	std::cout << "Memory Addreses:" << std::endl;
	std::cout << &value << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << "Values:" << std::endl;
	std::cout << value << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	return (0);
}