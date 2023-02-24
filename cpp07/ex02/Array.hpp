/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:42:41 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/23 20:54:03 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>

class Array
{
	private:
		T 			*data;
		unsigned int size;
	
	public:
		 // Default constructor
		Array() : data(NULL), size(0) {}

		// Constructor with size
		Array(unsigned int n) : data(new T[n]), size(n){}

		// Copy constructor
		Array(const Array& other) : data(new T[other.size]), size(other.size)
		{
			for (unsigned int i = 0; i < size; i++)
				data[i] = other.data[i];
		}

		// Assignment operator
		Array& operator=(const Array& other)
		{
			if (this != &other) {
                    delete[] data;
                data = new T[other.size];
                size = other.size;
                for (unsigned int i = 0; i < size; i++) {
                    data[i] = other.data[i];
                }
            }
            return *this;
		}

		// Destructor
		~Array()
		{
			delete[] data;
		}

		class WrongIndexException : public std::exception
		{

			public:
                virtual const char* what() const throw()
                {
                    return "Wrong index";
                }
        };
		
		// Subscript operator
		T& operator[](unsigned int i)
		{
			if (i >= size)
				throw std::exception();
			return data[i];
		}

		// Size function
		unsigned int getSize() const
		{
			return size;
		}
};

#endif