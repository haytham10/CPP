/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:07:49 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/16 20:07:49 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, const int signGrade, const int executeGrade)
    : m_name(name), m_isSigned(false), m_signGrade(signGrade), m_execGrade(executeGrade) 
{
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other) :
    m_name(other.m_name),
    m_isSigned(other.m_isSigned),
    m_signGrade(other.m_signGrade),
    m_execGrade(other.m_execGrade) {}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        m_isSigned = other.m_isSigned;
    return *this;
}

Form::~Form() {}

const std::string& Form::getName() const {
    return m_name;
}

bool Form::isSigned() const {
    return m_isSigned;
}

int Form::getSignGrade() const {
    return m_signGrade;
}

int Form::getExecGrade() const {
    return m_execGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > m_signGrade) {
        throw GradeTooLowException();
    }
    m_isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form " << form.getName() << " is " << (form.isSigned() ? "signed" : "not signed") << " and requires grade " << form.getSignGrade() << " to sign and grade " << form.getExecGrade() << " to execute.";
	return os;
}