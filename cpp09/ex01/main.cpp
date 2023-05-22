/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 06:08:35 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/22 06:08:35 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./RPN <expression>\n";
        return 1;
    }

    std::string expression = argv[1];
    double result = evaluateRPNExpression(expression);

    if (!std::isnan(result)) {
        std::cout << result << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }

    return 0;
}
