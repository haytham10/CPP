/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 06:07:32 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/22 08:32:01 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(const std::string& token)
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

double applyOperator(const std::string& op, double operand1, double operand2)
{
    if (op == "+")
        return operand1 + operand2;
    else if (op == "-")
        return operand1 - operand2;
    else if (op == "*")
        return operand1 * operand2;
    else if (op == "/")
        return operand1 / operand2;
    else
        return NAN;  // Invalid operator
}

double evaluateRPNExpression(const std::string& expression) {
    std::stack<double> operands;

    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
	{
        if (token.size() == 1 && std::isdigit(token[0]))
		{
            double operand = std::atof(token.c_str());
            operands.push(operand);
        }
		else if (isOperator(token))
		{
            if (operands.size() < 2)
                // Invalid expression: insufficient operands
                return NAN;

            double operand2 = operands.top();
            operands.pop();

            double operand1 = operands.top();
            operands.pop();

            double result = applyOperator(token, operand1, operand2);
            operands.push(result);
		}
        else
            // Invalid token
            return NAN;
    }

    if (operands.size() == 1)
        return operands.top();
    else
        // Invalid expression: operands remaining on stack
        return NAN;
}
