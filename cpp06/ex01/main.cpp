/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:39:56 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/22 15:39:56 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data data = {42, 3.14, 'X'};

    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Serialized: " << serialized << std::endl;

    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized: {" << deserialized->v1 << ", " << deserialized->v2 << ", " << deserialized->v3 << "}" << std::endl;

    if (deserialized == &data)
	{
        std::cout << "Pointers match" << std::endl;
	}
	else
	{
		std::cout << "Pointers do not match" << std::endl;
	}

	return (0);
}