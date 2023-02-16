/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:17:10 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/16 20:17:10 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
    try 
	{
        Bureaucrat bureaucrat1("John", 1);
        Bureaucrat bureaucrat2("Jane", 150);
        Form form1("1", 100, 50);
        Form form2("2", 10, 5);

        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;

        bureaucrat1.incrementGrade();
        bureaucrat2.decrementGrade();
        form1.beSigned(bureaucrat1);
        form2.beSigned(bureaucrat2);
        bureaucrat1.signForm(form1);
        bureaucrat2.signForm(form2);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
