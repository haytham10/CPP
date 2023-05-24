/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:35:04 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/24 10:55:43 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[])
{
    if (argc < 2)
	{
        std::cerr << "Error: No input sequence provided." << std::endl;
        return 1;
    }

    std::vector<int> sequence;
	for (int i = 1; i < argc; ++i)
	{
		try
		{
			int num = std::stoi(argv[i]);
			if (num < 0)
			{
				std::cerr << "Error: Negative integers are not allowed." << std::endl;
				return 1;
			}
			sequence.push_back(num);
		}
		catch (...) 
		{
			std::cerr << "Error: Invalid input." << std::endl;
			return 1;
		}
	}

    std::deque<int> sequence2(sequence.begin(), sequence.end());

    displaySequence("Before: ", sequence);

    // Sort using vector-based merge-insertion sort
    std::clock_t start = std::clock();
    fordJohnsonMergeInsertSort(sequence);
    std::clock_t end = std::clock();
    double time1 = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000);

    displaySequence("After: ", sequence);
    std::cout << "Time to process a range of " << sequence.size() << " elements with vector-based merge-insertion sort: " << time1 << " us" << std::endl;

    // Sort using deque-based merge sort
    start = std::clock();
    fordJohnsonMergeInsertSort(sequence2);
    end = std::clock();
	double time2 = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000);
	
    std::cout << "Time to process a range of " << sequence2.size() << " elements with deque-based merge-insertion sort: " << time2 << " us" << std::endl;

    return 0;
}