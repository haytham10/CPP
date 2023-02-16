/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:42:27 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/16 18:42:27 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    try
	{
        Bureaucrat bureaucrat("Alice", 50);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        Bureaucrat bureaucrat2("Bob", 0);
    } 
	catch (std::exception& e)
	{
        std::cout << "Exception caught: " << e.what() << std::endl;
	}
    return 0;
}