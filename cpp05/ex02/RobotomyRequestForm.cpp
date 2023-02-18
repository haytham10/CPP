/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:08:55 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/18 15:08:55 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <ctime> // for std::time()
#include <cstdlib> // for std::rand() and std::srand()

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) :
    AForm("Robotomy Request Form", 72, 45),
    _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) :
    AForm(src),
    _target(src._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (this->isSigned() == false)
        throw FormNotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    srand(time(NULL));
    std::cout << "*drilling noises* ";
    if (std::rand() % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy of " << this->_target << " has failed." << std::endl;
}
