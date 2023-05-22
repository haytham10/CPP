/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:35:04 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/22 09:38:08 by hmokhtar         ###   ########.fr       */
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

    std::vector<int> sequence1 = sequence;
    std::deque<int> sequence2(sequence.begin(), sequence.end());

    displaySequence("Before: ", sequence);

    // Sort using vector-based merge-insertion sort
    std::clock_t start = std::clock();
    fordJohnsonMergeInsertSort(sequence1);
    std::clock_t end = std::clock();
    double time1 = (end - start) / (double)CLOCKS_PER_SEC;

    displaySequence("After: ", sequence1);
    std::cout << "Time to process a range of " << sequence1.size() << " elements with vector-based merge-insertion sort: " << time1 << " seconds" << std::endl;

    // Sort using deque-based merge sort
    start = std::clock();
    fordJohnsonMergeInsertSort(sequence2);
    end = std::clock();
    double time2 = (end - start) / (double)CLOCKS_PER_SEC;
	
    std::cout << "Time to process a range of " << sequence2.size() << " elements with deque-based merge sort: " << time2 << " seconds" << std::endl;

    return 0;
}