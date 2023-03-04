/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:24:41 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/03/04 10:24:41 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::deque<T> _container;

	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &src) : std::stack<T>(src), _container(src._container) {}
		~MutantStack() {}
		MutantStack &operator=(const MutantStack &rhs)
		{
			if (this != &rhs) {
				this->_container = rhs._container;
				std::stack<T>::operator=(rhs);
			}
			return (*this);
		}

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;

		iterator begin()
		{
			return (this->_container.begin());
		}

		const_iterator cbegin() const
		{
			return (this->_container.cbegin());
		}

		iterator end()
		{
			return (this->_container.end());
		}

		const_iterator cend() const
		{
			return (this->_container.cend());
		}
};

#endif