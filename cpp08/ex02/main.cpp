/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:31:11 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/03/06 14:52:58 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "--------------------STACK--------------------" << std::endl;
	
    MutantStack<int>mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "stack first = " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "stack size = " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
	
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
	
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
	
	std::cout << "--------------------LIST--------------------" << std::endl;
	
	std::list< int > list;
    list.push_back(5);
    list.push_back(17);

    std::cout << "list first = " << list.back() << std::endl;

    list.pop_back();
    std::cout << "list size = " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
   
    list.push_back(0);

    std::list<int>::iterator list_first = list.begin();
    std::list<int>::iterator list_last = list.end();
    ++list_first;
    --list_first;
    while (list_first != list_last)
    {
        std::cout << *list_first << std::endl;
        ++list_first;
    }
    std::list<int> lst(list);

	return 0;
}
