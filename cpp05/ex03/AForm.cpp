/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:01:16 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/18 14:01:16 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int _signGrade, int _execGrade) :
    _name(name), _signed(false), _signGrade(_signGrade), _execGrade(_execGrade) {}

AForm::AForm(const AForm& other) :
    _name(other._name), _signed(false), _signGrade(other._signGrade), _execGrade(other._execGrade) {}

AForm::~AForm() {}

std::string AForm::getName() const {
    return _name;
}

bool AForm::isSigned() const {
    return _signed;
}

int AForm::getSignGrade() const {
    return _signGrade;
}

int AForm::getExecGrade() const {
    return _execGrade;
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _signGrade) {
        throw GradeTooLowException();
    }
    _signed = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form not signed";
}

AForm& AForm::operator=(const AForm& other) {
    _signed = other._signed;
    return *this;
}

void AForm::execute(Bureaucrat const & executor) const {
    if (!isSigned()) {
        throw FormNotSignedException();
    }
    if (executor.getGrade() > getExecGrade()) {
        throw GradeTooLowException();
    }
    this->execute(executor);
}


std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << form.getName() << ", signed: " << form.isSigned() << ",  sign grade: " << form.getSignGrade()
        << ",  exec grade: " << form.getExecGrade();
    return os;
}
