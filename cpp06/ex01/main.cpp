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
    Data data;
    data.v1 = 42;
    data.v2 = 3.14;
	data.v3 = 'a';

    uintptr_t ptr_val = Serializer::serialize(&data);
    Data* ptr = Serializer::deserialize(ptr_val);

    if (ptr == &data) {
        std::cout << "Serialization and deserialization succeeded!" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}