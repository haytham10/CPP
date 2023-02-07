/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:17:03 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/06 04:20:07 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// Add a contact to the phonebook
void PhoneBook::Add(const Contact& contact) {
  // If the phonebook is full, replace the oldest contact
  if (num_contacts == 8) {
    // Shift all the contacts one position to the left
    for (int i = 0; i < 7; ++i) {
      contacts[i] = contacts[i + 1];
    }
    // Add the new contact to the end
    contacts[7] = contact;
  }
  // Otherwise, just add the new contact
  else {
    contacts[num_contacts++] = contact;
  }
}

// Search for a contact with a given index
Contact PhoneBook::Search(int index) const {
  // If the index is out of range, return an empty contact
  if (index < 0 || index >= num_contacts) {
    return Contact("", "", "", "", "");
  }
  // Otherwise, return the contact with the given index
  return contacts[index];
}

// Truncate a string to a certain length, replacing the last character with a dot (.) if necessary.
std::string Truncate(const std::string& str, size_t length) {
  if (str.size() > length) 
    return str.substr(0, length - 1) + ".";
  return str;
}

// Display the phonebook
void PhoneBook::Display() const {
  // Print the header
  std::cout << "|-------------------------------------------|" << std::endl;
  std::cout << "| index | first name | last name | nickname |" << std::endl;
  // Print a line separator
  std::cout << "|-------|------------|-----------|----------|" << std::endl;

  // Iterate over the contacts
  for (int i = 0; i < 8; ++i) 
  {
    // Print the index, right-aligned and padded with spaces
    std::cout << "|" << std::right << std::setw(6) << i << " |";
    // Print the first name, right-aligned and padded with spaces
    std::cout << std::right << std::setw(12) << Truncate(contacts[i].FirstName(), 12) << "|";
    // Print the last name, right-aligned and padded with spaces
    std::cout << std::right << std::setw(11) << Truncate(contacts[i].LastName(), 11) << "|";
    // Print the nickname, right-aligned and padded with spaces
    std::cout << std::right << std::setw(10) << Truncate(contacts[i].Nickname(), 10) << "|" << std::endl;
  }
  // Print a line separator
  std::cout << "|_______|____________|___________|__________|" << std::endl;
}


// Display a contact
void Contact::Display() const {
  std::cout << "First name: " << first_name << std::endl;
  std::cout << "Last name: " << last_name << std::endl;
  std::cout << "Nickname: " << nickname << std::endl;
  std::cout << "Phone number: " << phone_number << std::endl;
  std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

int main() {
  // Create a phonebook
  PhoneBook phonebook;

  while (true) {
    // Prompt for a command
    std::string command;
    std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
    std::cin >> command;

    // Convert the command to uppercase
    std::transform(command.begin(), command.end(), command.begin(), ::toupper);

    // If the user enters ADD, prompt for the fields of the new contact and add it to the phonebook
    if (command == "ADD") {
      // Prompt for the fields of the new contact
      std::string first_name, last_name, nickname, phone_number, darkest_secret;
      std::cout << "Enter the first name: ";
      std::cin >> first_name;
      std::cout << "Enter the last name: ";
      std::cin >> last_name;
      std::cout << "Enter the nickname: ";
      std::cin >> nickname;
      std::cout << "Enter the phone number: ";
      std::cin >> phone_number;
      std::cout << "Enter the darkest secret: ";
      std::cin >> darkest_secret;
      // Create a new contact with the fields
      Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
      // Add the contact to the phonebook
      phonebook.Add(contact);
    }
    // If the user enters SEARCH, display the saved contacts and prompt for the index of the contact to display
	else if (command == "SEARCH") 
	{
 		phonebook.Display();
		int index;
    	std::cout << "Enter the index of the contact to display: ";
    	std::string index_input;
    	std::cin >> index_input;
    	if (!std::all_of(index_input.begin(), index_input.end(), ::isdigit)) 
		{
    		std::cout << "Invalid index" << std::endl;
    		continue;
    	}
      index = stoi(index_input); // Convert the string to an integer
      if (index < 0 || index >= 7)
	  {
        std::cout << "Index out of range" << std::endl;
        continue;
      }
      Contact contact = phonebook.Search(index);
      contact.Display();
}

    // If the user enters EXIT, exit the program
    else if (command == "EXIT") {
      // Exit the program
      return 0;
    }
    // Otherwise, continue prompting for commands
  }
}
