/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:24:11 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/19 15:24:11 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
	std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	try
	{
		for(int i = 0; i < 3; i++)
		{
			if (formName == str[i])
			{
				std::cout << "Intern creates " << formName << std::endl;
				switch(i)
				{
					case 0:
						return (new ShrubberyCreationForm(target));
						break;
					case 1:
						return (new RobotomyRequestForm(target));
						break;
					case 2:
						return (new PresidentialPardonForm(target));
						break;
					default:
						break;
				}
			}
		}
		throw Intern::FromNotFound();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (NULL);
}
