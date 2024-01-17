/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:00:33 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/17 18:43:40 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("undefined"), _hp(10), _energy(10), _atk_dmg(0)
{
	std::cout << "ClapTrap default constructor called, resulting in a Trap whose name is " << yellow << "undefined." << reset << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _atk_dmg(0)
{
	std::cout << "ClapTrap constructor called with the name : " << yellow << name << reset << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for : " << yellow << this->_name << reset << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap copy assignement constructor called" << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_atk_dmg = src._atk_dmg;
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hp > 0 && this->_energy > 0)
	{
		std::cout << "ClapTrap \"" << yellow << this->_name << reset << "\" attacks " << target << ", causing " << this->_atk_dmg << " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "Too exhausted, ClapTrap \"" << yellow << this->_name << reset << "\" misses his attack." << std::endl;
	else if (this->_hp == 0)
		std::cout << "Having no hit points left, ClapTrap \"" << yellow << this->_name << reset << "\" wasn't able to perform his assault." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > amount)
		this->_hp -= amount;
	else if (this->_hp > 0)
		this->_hp = 0;
	else if (this->_hp == 0)
	{
		std::cout << "Trap \"" << yellow << this->_name << reset << "\" doesn't have any HP left." << std::endl;
		return ;
	}
	std::cout << "Trap \"" << yellow << this->_name << reset << "\" got hit for " << amount << " damage, leaving him at " << this->_hp << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy == 0)
		std::cout << "\"" << yellow << this->_name << reset << "\" is too exhausted to repair himself." << std::endl;
	else if (this->_hp == 0)
		std::cout << "\"" << yellow << this->_name << reset << "\" has not enough hp left to attempt a repair." << std::endl;
	else if (this->_hp > 0 && this->_energy > 0)
	{
		this->_energy--;
		this->_hp += amount;
		std::cout << "Trap \"" << yellow << this->_name << reset << "\" has been repaired for " << amount << " hp and has now a total of " << this->_hp << " hp and " << this->_energy << " energy points left." << std::endl;
	}
}

//getters

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHp() const
{
	return (this->_hp);
}

unsigned int	ClapTrap::getEnergy() const
{
	return (this->_energy);
}

unsigned int	ClapTrap::getAtkDmg() const
{
	return (this->_atk_dmg);
}

//setters

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHp(unsigned int hp)
{
	this->_hp = hp;
}

void	ClapTrap::setEnergy(unsigned int energy)
{
	this->_energy = energy;
}

void	ClapTrap::setAtkDmg(unsigned int atk_dmg)
{
	this->_atk_dmg = atk_dmg;
}

