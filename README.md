# CPP Modules for 42 Cursus
## C++ Module 00:
### *EX00*:
A simple program called **`Magaphone`** to transform lowercase input into uppercase.
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

## C++ Module 01:
### *EX00*:
Here is an example of how you can implement the Zombie class in C++:
```
#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name) : name(name) {}

    void announce() {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }

    ~Zombie() {
        std::cout << name << " has been destroyed." << std::endl;
    }
};

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}
```
The **`newZombie`** function creates a new zombie on the heap and returns a pointer to it, while the **`randomChump`** function creates a zombie on the stack and announces it.

As for determining when it's better to allocate the zombies on the stack or heap, here are some considerations:

- If the lifetime of the zombie is limited to the scope in which it was created, it is generally better to allocate it on the stack. This is because stack allocation is faster and more efficient than heap allocation, and the zombie will be automatically destroyed when the function exits.
- If the zombie needs to live beyond the scope in which it was created, it is generally better to allocate it on the heap. In this case, you will need to remember to delete the zombie when you are done with it to avoid memory leaks.

It's also worth noting that in C++, it's generally recommended to use smart pointers (such as *`std::unique_ptr`* or *`std::shared_ptr`*) to manage the lifetime of objects allocated on the heap, as they make it easier to ensure that the objects are properly deleted when they are no longer needed.

### *EX01*:
To implement the **`zombieHorde()`** function, you will need to do the following:

- Allocate an array of **`N`** **`Zombie`** objects using the *`new`* operator.
- Initialize each **`Zombie`** object in the array by calling its constructor and passing it the **`name`** parameter.
- Return a pointer to the first **`Zombie`** object in the array.

Here is an example of what the **`zombieHorde()`** function might look like:
```
Zombie *zombieHorde(int N, std::string name)
{
  Zombie *horde = new Zombie[N];  // Allocate an array of N Zombies
  
  for (int i = 0; i < N; i++)
    horde[i] = Zombie(name);  // Initialize each Zombie in the array
    
  return horde;  // Return a pointer to the first Zombie in the array
}
```
To test the **`zombieHorde()`** function, you can create a few test cases that create different hordes of zombies with different names and then call the **`announce()`** method on each zombie in the horde. Be sure to delete the zombie horde when you are done with it to avoid memory leaks.

Here is an example of how you might test the **`zombieHorde()`** function:
```
int main()
{
  // Create a horde of 5 zombies with the name "Zombie 1"
  Zombie* horde = zombieHorde(5, "Zombie 1");
  for (int i = 0; i < 5; i++) {
    horde[i].announce();  // Call announce() on each zombie in the horde
  }
  delete[] horde;  // Delete the horde to avoid memory leaks

  // Create a horde of 3 zombies with the name "Zombie 2"
  horde = zombieHorde(3, "Zombie 2");
  for (int i = 0; i < 3; i++) {
    horde[i].announce();  // Call announce() on each zombie in the horde
  }
  delete[] horde;  // Delete the horde to avoid memory leaks

  return 0;
}
```
Don't forget to include the necessary headers and implement the **`Zombie`** and **`ZombieHorde`** classes as needed. You may also need to write a **`Makefile`** to build and run your program.

### *EX02*:
The goal of this exercise is to understand the difference between a string variable, a pointer to a string, and a reference to a string.

A string variable is a variable that stores a string value. The value of the string variable can be accessed and modified directly.

A pointer to a string is a variable that stores the memory address of a string. The value of the string pointed to by the pointer can be accessed and modified by dereferencing the pointer.

A reference to a string is an alias for the string. It is another name for the same string. The value of the string referred to by the reference can be accessed and modified directly, just like a normal string variable.

The exercise involves printing the memory addresses of the string variable, the pointer, and the reference, as well as the values of the string variable, the string pointed to by the pointer, and the string referred to by the reference. This helps to demonstrate how these three different ways of storing and accessing a string value differ from each other.

### *EX03*:
The goal of this exercise is to practice implementing classes in C++. Specifically, you are asked to implement a **`Weapon`** class and two classes **`HumanA`** and **`HumanB`** which have a **`Weapon`** and a **`name`**. You are also asked to implement a member function **`attack()`** in these classes which displays a message with the name of the human and their weapon type.

In this exercise, you will need to think about the relationships between these classes and how they interact with each other. You will also need to consider the differences between **`HumanA`** and **`HumanB`** and how they are implemented differently to reflect these differences. This exercise is designed to help you gain a better understanding of class design and implementation in C++.

### *EX04*:
The goal of this exercise was to create a C++ program that takes three parameters: a filename, and two strings, s1 and s2. The program was required to open the file with the given filename and create a new file with the same name and a ".replace" extension, where every occurrence of s1 in the original file was replaced with s2. The program was not allowed to use C file manipulation functions, but was allowed to use all member functions of the **`std::string`** class except for **`replace`**.

To solve this exercise, we created a main file and a separate file called "createFile". The main file was responsible for parsing the input arguments and calling the **`createFile`** function to create the output file. The **`createFile`** function opened the input and output files, read the input file line by line, and wrote the modified lines to the output file. The lines were modified by finding all occurrences of s1 and replacing them with s2 using the **`find`** and **`substr`** functions from the **`std::string`** class.

We also added error handling to the program to handle cases where the incorrect number of arguments were provided or where the input or output files could not be opened.

### *EX05*:
The goal of this exercise was to use pointers to member functions to implement the **`Harl`** class, which has a public member function called **`complain`** that takes a string parameter indicating the level of complaint and calls the appropriate private member function. The implementation of the **`complain`** function should not use a "forest of if/else if/else" statements, but should instead use a pointer to member function to store a reference to the appropriate member function to be called. The **`Harl`** class should be tested by calling the **`complain`** function with different levels of complaint to ensure that it behaves as expected.
