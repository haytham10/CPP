/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:17:59 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/13 01:17:59 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal 
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif