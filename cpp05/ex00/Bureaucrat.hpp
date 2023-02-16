/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:19:59 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/16 18:19:59 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat 
{
	private:
		const std::string name_;
		int grade_;

	public:
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Bureaucrat grade is too high";
			}
		};

		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Bureaucrat grade is too low";
			}
		};

		Bureaucrat(const std::string& name, int grade);

		Bureaucrat(const Bureaucrat& src);

		Bureaucrat& operator=(const Bureaucrat& src);

		~Bureaucrat();

		const std::string& getName() const;

		int getGrade() const;

		void incrementGrade();

		void decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif