/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:27:25 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 22:39:01 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_atk_dmg = 20;
	this->_gatekeeper_mode = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called with the name : " << name << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_atk_dmg = 20;
	this->_gatekeeper_mode = false;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_gatekeeper_mode = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for :" << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap copy assignement constructor called" << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_atk_dmg = src._atk_dmg;
	this->_gatekeeper_mode = src._gatekeeper_mode;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp > 0 && this->_energy > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atk_dmg << " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "Too exhausted, ScavTrap " << this->_name << " misses his attack." << std::endl;
	else if (this->_hp == 0)
		std::cout << "Having no hit points left, ScavTrap " << this->_name << " wasn't able to perform his assault." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_gatekeeper_mode == false)
	{
		this->_gatekeeper_mode = true;
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already in Gate Keeper mode." << std::endl;
}
