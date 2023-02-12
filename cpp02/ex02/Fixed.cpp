/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:38:08 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/12 22:45:53 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
    this->_FixedValue = 0;
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::~Fixed(void){}

Fixed::Fixed(const int _FixedValue)
{
    this->_FixedValue = (int)round(_FixedValue * (1 << this->_fractionalBits));
}

Fixed::Fixed(const float _FixedValue)
{
    this->_FixedValue = (int)round(_FixedValue * (1 << this->_fractionalBits));
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    if (this != &rhs)
    {
        this->_FixedValue = rhs.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_FixedValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_FixedValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_FixedValue / (float)(1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
    return (int)this->_FixedValue >> (int)this->_fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixedRef)
{
    out << fixedRef.toFloat();
    return out;
}

bool Fixed::operator== (const Fixed& fixed)
{
    return (_FixedValue == fixed._FixedValue);
}

bool Fixed::operator!= (const Fixed& fixed)
{
    return (_FixedValue != fixed._FixedValue);
}

bool Fixed::operator< (const Fixed& fixed)
{
    return (_FixedValue < fixed._FixedValue);
}

bool Fixed::operator> (const Fixed& fixed)
{
    return (_FixedValue > fixed._FixedValue);
}

bool Fixed::operator<= (const Fixed& fixed)
{
    return (_FixedValue <= fixed._FixedValue);
}

bool Fixed::operator>= (const Fixed& fixed)
{
    return (_FixedValue >= fixed._FixedValue);
}

Fixed Fixed::operator+ (const Fixed& fixed)
{
    Fixed f;
    
    f._FixedValue = fixed._FixedValue + this->_FixedValue;
    return f;
}

Fixed Fixed::operator- (const Fixed& fixed)
{
    Fixed f;
    
    f._FixedValue = this->_FixedValue - fixed._FixedValue;
    return f;
}

Fixed Fixed:: operator* (const Fixed& fixed)
{
	Fixed f (this->toFloat() * fixed.toFloat());
	return (f);
}

Fixed Fixed:: operator/ (const Fixed& fixed)
{
	Fixed f (this->toFloat() / fixed.toFloat());
	return (f);
}

Fixed Fixed::operator++ ()
{
    Fixed f;
    
    ++_FixedValue;
    
    f._FixedValue = _FixedValue;
    return f;
}

Fixed Fixed::operator-- ()
{
    Fixed f;
    
    --_FixedValue;
    
    f._FixedValue = _FixedValue;
    return f;
}

Fixed Fixed::operator++ (int)
{
    Fixed f;
    
    f._FixedValue = _FixedValue++;
    return f;
}

Fixed Fixed::operator-- (int)
{
    Fixed f;
    
    _FixedValue--;
    
    f._FixedValue = _FixedValue;
    return f;
}

Fixed Fixed:: max(Fixed &a, Fixed &b){
	if (a > b)
		return (a);
	return (b);
}

const Fixed Fixed:: max(const Fixed &a, const Fixed &b){
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed Fixed:: min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	return (b);
}

const Fixed Fixed:: min(const Fixed &a, const Fixed &b){
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}
