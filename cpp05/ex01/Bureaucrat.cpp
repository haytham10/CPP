/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:22:06 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/16 18:22:06 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name_(name), grade_(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}


Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this != &src)
	{
		grade_ = src.grade_;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const
{
	return name_;
}

int Bureaucrat::getGrade() const
{
	return grade_;
}

void Bureaucrat::incrementGrade() 
{
	if (grade_ - 1 < 1)
		throw GradeTooHighException();
	grade_--;
}

void Bureaucrat::decrementGrade() 
{
	if (grade_ + 1 > 150)
		throw GradeTooLowException();
	grade_++;
}

void Bureaucrat::signForm(Form& form)
{
    if (form.getSignGrade() > grade_) {
        std::cout << name_ << " couldn't sign " << form.getName() << " because grade is too low" << std::endl;
    }
    else {
        form.beSigned(*this);
        std::cout << name_ << " signed " << form.getName() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return os;
}