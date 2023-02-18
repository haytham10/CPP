/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:04:26 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/16 20:04:26 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		const std::string m_name;
		bool m_isSigned;
		const int m_signGrade;
		const int m_execGrade;

	public:
		class GradeTooHighException : public std::exception 
		{
		public:
			virtual const char* what() const throw() {
				return "Grade is too high";
			}
		};

		class GradeTooLowException : public std::exception 
		{
		public:
			virtual const char* what() const throw() {
				return "Grade is too low";
			}
		};

		Form();

		Form(const std::string& name, const int signGrade, const int execGrade);

		Form(const Form& src);

		Form& operator=(const Form& src);

		~Form();

		const std::string& getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif