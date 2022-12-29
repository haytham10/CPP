# CPP Modules for 42 Cursus
## C++ Module 00:
### *EX00*:
This one is easy I don't need to put walkthrough about it.
A simple program to transform lowercase strings into upper case.
### *EX01*:
#### Phonebook:
This program is a phonebook software that allows the user to add, search, and display phonebook contacts. The program is implemented using two C++ classes: **`Contact`** and **`PhoneBook`**.

The Contact class represents a single phonebook contact and has the following fields:
- ***first_name***: the first name of the contact
- ***last_name***: the last name of the contact
- ***nickname***: the nickname of the contact
- ***phone_number***: the phone number of the contact
- ***darkest_secret***: the darkest secret of the contact

The **`Contact`** class has a constructor that initializes the fields of a **`Contact`** instance with the values of the constructor parameters. The **`Contact`** class also has several member functions that allow the user to access and display the fields of a **`Contact`** instance.

The **`PhoneBook`** class represents a phonebook and has the following fields:

- ***contacts***: an array of **`Contact`** instances that represents the phonebook contacts
- ***num_contacts***: the current number of contacts in the phonebook

The **`PhoneBook`** class has a constructor that initializes the **`num_contacts`** field with the value 0. The **`PhoneBook`** class also has several member functions that allow the user to add, search, and display the contacts in the phonebook:

- *`Add(const Contact& contact)`*: adds a new contact to the phonebook. If the phonebook is full (i.e. has 8 contacts), the oldest contact is replaced with the new contact.
- *`Search(int index) const`*: searches for a contact with a given index in the phonebook. If the index is out of range or invalid, an empty contact is returned. Otherwise, the contact with the given index is returned.
- *`Display() const`*: displays the contacts in the phonebook as a list of 4 columns: index, first name, last name, and nickname.

The main function of the program prompts the user to enter one of three commands: ADD, SEARCH, or EXIT. If the user enters the ADD command, the program prompts the user to input the information of a new contact and adds the contact to the phonebook. If the user enters the SEARCH command, the program displays the saved contacts as a list and prompts the user to input the index of the contact to display. If the user enters the EXIT command, the program quits. Any other input is discarded. The program waits for another command after each command is correctly executed, and stops when the user inputs EXIT.
