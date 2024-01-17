/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:05:51 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/17 18:15:27 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:

	ScavTrap(void);
	ScavTrap(const ScavTrap &copy);
	ScavTrap(std::string name);

	virtual ~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &src);

	void	attack(const std::string &target);
	void	guardGate(void);

	private:

	bool	_gatekeeper_mode;
};

#endif
