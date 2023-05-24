/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:35:06 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/05/24 10:45:13 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

void displaySequence(const std::string& message, const std::vector<int>& sequence);
void displaySequence(const std::string& message, const std::deque<int>& sequence);
void fordJohnsonMergeInsertSort(std::vector<int>& sequence);
void fordJohnsonMergeInsertSort(std::deque<int>& sequence);

#endif
