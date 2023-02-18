/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:04:41 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/18 15:04:41 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm shrubbery("shruby");
	RobotomyRequestForm robotomy("robot");
	PresidentialPardonForm presidential("presidential");
	Bureaucrat daniel("Daniel", 100);
	Bureaucrat jack("Jack", 120);
	Bureaucrat emy("Emy", 3);

	std::cout << std::endl << "===================Daniel===================" << std::endl << std::endl;
	
    {
		try
		{
			std::cout << daniel << std::endl;
			std::cout << shrubbery << std::endl;
			daniel.signForm(shrubbery);
			daniel.executeForm(shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "===================Jack===================" << std::endl << std::endl;
	
	{
		try
		{
			std::cout << jack << std::endl;
			std::cout << robotomy << std::endl;
			jack.signForm(robotomy);
			jack.executeForm(robotomy);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "===================Emy===================" << std::endl << std::endl;

	{
		try
		{
			std::cout << emy << std::endl;
			std::cout << presidential << std::endl;
			emy.signForm(presidential);
			emy.executeForm(presidential);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}