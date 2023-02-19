/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:20:12 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/19 15:20:12 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		Intern(const Intern& src);
		Intern& operator=(const Intern& src);
		~Intern();
		AForm* makeForm(const std::string& formName, const std::string& target);
		class FromNotFound : public std::exception
		{
			public:
				virtual const char* what() const throw()
					{return "Form not found";}
		};
};

#endif