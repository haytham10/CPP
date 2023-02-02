/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:25:04 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/02 10:25:04 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &other);
		~Fixed();

		Fixed &operator=(const Fixed &other);

		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int                 _fixedPointValue;
		static const int    _fractionalBits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
