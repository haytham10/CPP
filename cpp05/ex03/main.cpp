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

#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    Intern intern;
	
	try
	{
		AForm *form1 = intern.makeForm("presidential pardon", "Daniel");
		delete form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	

	return 0;
}
