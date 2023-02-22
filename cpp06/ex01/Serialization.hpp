/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:40:27 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/22 15:40:27 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <cstdint>
#include <iostream>

typedef struct Data
{
    int     v1;
    double  v2;
    char    v3;
} Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& src);

	public:
		Serializer& operator=(const Serializer& src);
		~Serializer();

		static uintptr_t    serialize(Data* ptr);
		static Data*        deserialize(uintptr_t raw);
};

#endif