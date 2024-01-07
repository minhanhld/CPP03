/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:27:25 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 23:04:06 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_atk_dmg = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called with the name : " << name << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_atk_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for :" << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy assignement constructor called" << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_atk_dmg = src._atk_dmg;
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_hp > 0 && this->_energy > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_atk_dmg << " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "Too exhausted, FragTrap " << this->_name << " misses his attack." << std::endl;
	else if (this->_hp == 0)
		std::cout << "Having no hit points left, FragTrap " << this->_name << " wasn't able to perform his assault." << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " : HIGH FIVE ?\nYEAH\n(▼▽▼)ノ＼(▼▽▼)" << std::endl;
}
