/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:49:16 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/16 20:10:01 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP
# include <iostream>
# include <string>

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
