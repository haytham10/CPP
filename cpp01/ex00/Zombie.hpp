/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:32:17 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/12/30 17:32:17 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		void announce();
		~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif