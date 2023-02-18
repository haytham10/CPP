/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:03:37 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/18 15:03:37 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    if (this != &rhs) {
        this->_target = rhs._target;
        AForm::operator=(rhs);
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (this->isSigned() == false) {
        throw FormNotSignedException();
    }
    else if (executor.getGrade() > this->getExecGrade()) {
        throw GradeTooLowException();
    }
    else
    {
        std::ofstream ofs((this->_target + "_shrubbery").c_str(), std::ofstream::out);
        if (!ofs.is_open())
            throw std::exception();
        ofs << "        v\n       >X<\n        A\n       d$b\n     .d\\$$b.\n   .d$i$$\\$$b.\n      d$$@b\n     I$$$$I\n      d$$@b\n     d\\$$$b\\\n   .d$$i$$$@$$b.\n      ###\n      ###\n      ###\n";
        ofs.close();
    }
}
