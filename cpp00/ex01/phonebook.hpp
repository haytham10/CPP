/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:13:18 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/11/05 18:30:49 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// Phonebook contact
class Contact {
private:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secret;

public:
  // Default constructor
  Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("") {}
  
  // Constructor
  Contact(const std::string& first_name, const std::string& last_name,
          const std::string& nickname, const std::string& phone_number,
          const std::string& darkest_secret)
      : first_name(first_name),
        last_name(last_name),
        nickname(nickname),
        phone_number(phone_number),
        darkest_secret(darkest_secret) {}

  // Get the first name of the contact
  std::string FirstName() const { return first_name; }

  // Get the last name of the contact
  std::string LastName() const { return last_name; }

  // Get the nickname of the contact
  std::string Nickname() const { return nickname; }

  // Get the phone number of the contact
  std::string PhoneNumber() const { return phone_number; }

  // Get the darkest secret of the contact
  std::string DarkestSecret() const { return darkest_secret; }

  // Display the contact
  void Display() const;
};

// Phonebook
class PhoneBook {
private:
  // Array of contacts
  Contact contacts[8];
  // Current number of contacts
  int num_contacts;

public:
  // Constructor
  PhoneBook() : num_contacts(0) {}

  // Add a contact to the phonebook
  void Add(const Contact& contact);

  // Search for a contact with a given index
  Contact Search(int index) const;

  // Display the phonebook
  void Display() const;
};

#endif