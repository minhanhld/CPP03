/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <mle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:05:51 by mle-duc           #+#    #+#             */
/*   Updated: 2024/01/07 22:56:49 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP__HPP
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:

	FragTrap(void);
	FragTrap(const FragTrap &copy);
	FragTrap(std::string name);

	virtual ~FragTrap(void);

	FragTrap &operator=(const FragTrap &src);

	void	attack(const std::string &target);
	void	highFiveGuys(void);

	private:
};

#endif
