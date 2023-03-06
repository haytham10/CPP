/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:24:41 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/03/06 14:49:24 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &src) : std::stack<T>(src){}
		~MutantStack() {}
		MutantStack &operator=(const MutantStack &rhs)
		{
			std::stack<T, C>::operator=(rhs);
			return (*this);
		}

		typedef typename std::stack<T, C>::container_type::iterator iterator;
		typedef typename std::stack<T, C>::container_type::const_iterator const_iterator;

		iterator begin()
		{
			return (this->c.begin());
		}

		const_iterator cbegin() const
		{
			return (this->c.cbegin());
		}

		iterator end()
		{
			return (this->c.end());
		}

		const_iterator cend() const
		{
			return (this->c.cend());
		}
};

#endif