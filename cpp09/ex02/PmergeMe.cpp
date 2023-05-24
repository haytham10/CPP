/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:48:29 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/24 11:33:03 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void displaySequence(const std::string& message, const std::vector<int>& sequence)
{
    std::cout << message << std::endl;
    for (std::size_t i = 0; i < sequence.size(); ++i)
        std::cout << sequence[i] << " ";
    std::cout << std::endl;
}

void displaySequence(const std::string& message, const std::deque<int>& sequence)
{
    std::cout << message << std::endl;
    for (std::deque<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void fordJohnsonMerge(std::vector<int>& sequence, std::size_t left, std::size_t center, std::size_t right)
{
    std::size_t n1 = center - left + 1;
    std::size_t n2 = right - center;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (std::size_t i = 0; i < n1; ++i)
        L[i] = sequence[left + i];
    for (std::size_t j = 0; j < n2; ++j)
        R[j] = sequence[center + 1 + j];

    std::size_t i = 0;
    std::size_t j = 0;
    std::size_t k = left;

    while (i < n1 && j < n2)
	{
        if (L[i] <= R[j])
		{
            sequence[k] =  L[i];
            ++i;
        }
		else
		{
            sequence[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
	{
        sequence[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2)
	{
        sequence[k] = R[j];
        ++j;
        ++k;
    }
}


void fordJohnsonMerge(std::deque<int>& sequence, std::size_t left, std::size_t center, std::size_t right)
{
    std::size_t n1 = center - left + 1;
    std::size_t n2 = right - center;

    std::deque<int> L(n1);
    std::deque<int> R(n2);

    for (std::size_t i = 0; i < n1; ++i)
        L[i] = sequence[left + i];
    for (std::size_t j = 0; j < n2; ++j)
        R[j] = sequence[center + 1 + j];

    std::size_t i = 0;
    std::size_t j = 0;
    std::size_t k = left;

    while (i < n1 && j < n2)
	{
        if (L[i] <= R[j])
		{
            sequence[k] = L[i];
            ++i;
        }
		else
		{
            sequence[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
	{
        sequence[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2)
	{
        sequence[k] = R[j];
        ++j;
        ++k;
    }
}


void fordJohnsonMergeInsertSort(std::vector<int>& sequence, std::size_t left, std::size_t right)
{
    if (left < right)
	{
        std::size_t center = (left + right) / 2;
        fordJohnsonMergeInsertSort(sequence, left, center);
        fordJohnsonMergeInsertSort(sequence, center + 1, right);
        fordJohnsonMerge(sequence, left, center, right);
    }
}

void	fordJohnsonMergeInsertSort(std::deque<int>& sequence, std::size_t left, std::size_t right)
{
	if (left < right)
	{
		std::size_t center = (left + right) / 2;
		fordJohnsonMergeInsertSort(sequence, left, center);
		fordJohnsonMergeInsertSort(sequence, center + 1, right);
		fordJohnsonMerge(sequence, left, center, right);
	}
}

void fordJohnsonMergeInsertSort(std::vector<int>& sequence)
{
    fordJohnsonMergeInsertSort(sequence, 0, sequence.size() - 1);
}

void fordJohnsonMergeInsertSort(std::deque<int>& sequence2)
{
	fordJohnsonMergeInsertSort(sequence2, 0, sequence2.size() - 1);
}
