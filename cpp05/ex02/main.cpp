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
    ShrubberyCreationForm form1("garden");
    RobotomyRequestForm form2("robot");
    PresidentialPardonForm form3("presidential");
    Bureaucrat bureaucrat1("Emma", 100);
    Bureaucrat bureaucrat2("Mike", 20);
    Bureaucrat bureaucrat3("John", 3);

    std::cout << std::endl << "===================Emma===================" << std::endl << std::endl;

    {
        try
        {
            std::cout << bureaucrat1 << std::endl;
            std::cout << form1 << std::endl;
            bureaucrat1.signForm(form1);
            bureaucrat1.executeForm(form1);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << std::endl << "===================Mike===================" << std::endl << std::endl;

    {
        try
        {
            std::cout << bureaucrat2 << std::endl;
            std::cout << form2 << std::endl;
            bureaucrat2.signForm(form2);
            bureaucrat2.executeForm(form2);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << std::endl << "===================John===================" << std::endl << std::endl;

    {
        try
        {
            std::cout << bureaucrat3 << std::endl;
            std::cout << form3 << std::endl;
            bureaucrat3.signForm(form3);
            bureaucrat3.executeForm(form3);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}
