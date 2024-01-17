/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:49:16 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/17 18:40:32 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP
# include <iostream>
# include <string>

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");

class ClapTrap
{
	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	virtual ~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &src);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		getName(void) const;
	unsigned int	getHp(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getAtkDmg(void) const;

	//setters
	void	setName(std::string name);
	void	setHp(unsigned int hp);
	void	setEnergy(unsigned int energy);
	void	setAtkDmg(unsigned int atk_dmg);

	protected:

	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_atk_dmg;
};

#endif
