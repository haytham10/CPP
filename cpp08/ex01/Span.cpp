/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:13:44 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/03/04 10:13:44 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _n(n)
{
	this->_v.reserve(n);
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_v = rhs._v;
		this->_n = rhs._n;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (this->_v.size() == this->_n)
		throw Span::FullException();
	this->_v.push_back(n);
}

int Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	std::vector<int> v = this->_v;
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (size_t i = 2; i < v.size(); i++)
	{
		if (v[i] - v[i - 1] < min)
			min = v[i] - v[i - 1];
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	std::vector<int> v = this->_v;
	std::sort(v.begin(), v.end());
	return (v[v.size() - 1] - v[0]);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_v.size() + (end - begin) > this->_n)
		throw Span::FullException();
	this->_v.insert(this->_v.end(), begin, end);
}
