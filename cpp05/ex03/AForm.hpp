/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:59:54 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/18 13:59:54 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;

	public:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();

		std::string getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(Bureaucrat& bureaucrat);
		virtual void execute(const Bureaucrat& executor) const = 0;

		class GradeTooHighException : public std::exception 
		{
		public:
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception 
		{
		public:
			const char* what() const throw();
		};

		class FormNotSignedException : public std::exception 
		{
		public:
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
