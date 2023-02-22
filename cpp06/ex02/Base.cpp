/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:29:24 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/22 17:29:24 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base * generate(void)
{
	srand(time(NULL));
	int r = rand() % 3;
	switch (r)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	default:
		return new C();
	}	
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
        std::cout << "Identified from pointer: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Identified from pointer: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Identified from pointer: C" << std::endl;
	else
		std::cout << "Identified from pointer: Unknown" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Identified from reference: A" << std::endl;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Identified from reference: B" << std::endl;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Identified from reference: C" << std::endl;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
}