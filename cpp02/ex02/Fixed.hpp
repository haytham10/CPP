/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:58:57 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/09 14:58:57 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int                 _FixedValue;
    static const int    _fractionalBits = 8;

public:
    Fixed();
    Fixed(const float f);
    Fixed(const int i);
    Fixed(const Fixed &fixed);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    Fixed &operator=(const Fixed &fixed);

    bool operator>(const Fixed &fixed);
    bool operator<(const Fixed &fixed);
    bool operator>=(const Fixed &fixed);
    bool operator<=(const Fixed &fixed);
    bool operator==(const Fixed &fixed);
    bool operator!=(const Fixed &fixed);

    Fixed operator+(const Fixed &fixed);
    Fixed operator-(const Fixed &fixed);
    Fixed operator*(const Fixed &fixed);
    Fixed operator/(const Fixed &fixed);

    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);

    static Fixed min(Fixed &a, Fixed &b);
    static const Fixed min(const Fixed &a, const Fixed &b);
    static Fixed max(Fixed &a, Fixed &b);
    static const Fixed max(const Fixed &a, const Fixed &b);

    friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
};

#endif