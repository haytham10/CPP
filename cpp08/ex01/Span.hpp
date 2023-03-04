/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:11:35 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/03/04 10:11:35 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int> _v;
		unsigned int _n;
		Span();

	public:
		Span(unsigned int n);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &rhs);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class FullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Container is full");
				}
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("No span to find");
				}
		};
};

#endif