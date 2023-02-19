/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:19:46 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/18 15:19:46 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

        void execute(Bureaucrat const & executor) const;
};

#endif
