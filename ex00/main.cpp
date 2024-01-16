/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:32:02 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/16 19:52:13 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");

int main()
{
		std::cout << cyan << "Creating 2 robots, one named 'Alain' and the other unnamed.\n" << reset << std::endl;
		ClapTrap a("Alain");
		ClapTrap b;
		std::cout << std::endl;

		std::cout << cyan << "Testing attack() and takeDamage() functions.\n" << reset << std::endl;
		std::cout << red << "a.attack(\"a random enemy\") : " << reset;
		a.attack("a random enemy");
		std::cout << red << "a.attack(\"another foe\") : " << reset;
		a.attack("another foe");
		std::cout << red << "a.takeDamage(10) : " << reset;
		a.takeDamage(10);
		std::cout << red << "a.takeDamage(10) : " << reset;
		a.takeDamage(10);
		std::cout << red << "a.takeDamage(-1) : " << reset;
		a.takeDamage(-1);
		std::cout << std::endl;

		std::cout << cyan << "Testint beRepaired() function.\n" << reset << std::endl;
		std::cout << red << "a.beRepaired(5) : " << reset;
		a.beRepaired(5);
		std::cout << red << "b.beRepaired(3) : " << reset;
		b.beRepaired(3);
		std::cout << red << "b.takeDamage(4) : " << reset;
		b.takeDamage(4);
		std::cout << red << "b.beRepaired(3) : " << reset;
		b.beRepaired(3);
		std::cout << red << "b.beRepaired(-1) : " << reset;
		b.beRepaired(-1);
		std::cout << red << "Unsigned INT MAX : b.beRepaired(4294967295) : " << reset;
		b.beRepaired(4294967295);
		std::cout << std::endl;

		std::cout << cyan << "Wasting a robot's energy and check if he can repair himself.\n" << reset << std::endl;
		for (int i = 0; i < 15; i++)
			b.attack("dummy");
		std::cout << red << "b.beRepaired(10) : " << reset;
		b.beRepaired(10);
		std::cout << std::endl;
		std::cout << cyan << "Destroying robots" << reset << std::endl;
	return (0);
}
