/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:00:33 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 20:41:40 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("undefined"), _hp(10), _energy(10), _atk_dmg(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _atk_dmg(0)
{
	std::cout << "Constructor called with the name : " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for :" << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignement constructor called" << std::endl;
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
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_atk_dmg << " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "Too exhausted, ClapTrap " << this->_name << " misses his attack." << std::endl;
	else if (this->_hp == 0)
		std::cout << "Having no hit points left, ClapTrap " << this->_name << " wasn't able to perform his assault." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > amount)
		this->_hp -= amount;
	else if (this->_hp > 0)
		this->_hp = 0;
	else if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name << "'s hp are already depleted." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " got hit for " << amount << " damage, leaving him at " << this->_hp << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_energy > 0 && this->_hp + amount <= 10)
	{
		this->_energy--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired for " << amount << " hp and has now a total of " << this->_hp << " hp." << std::endl;
	}
	else if (this->_hp + amount > 10)
		std::cout << "Repairing ClapTrap " << this->_name << " by that much would overheal him which is not possible" << std::endl;
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " is too exhausted to repair himself." << std::endl;
	else if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " has not enough hp left to attempt a repair." << std::endl;
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

