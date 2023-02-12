/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:25:07 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/12 21:31:23 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _FixedValue(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
  std::cout << "Int constructor called" << std::endl;
  _FixedValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const float value) {
  std::cout << "Float constructor called" << std::endl;
  _FixedValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other) {
  std::cout << "Copy constructor called" << std::endl;
  _FixedValue = other._FixedValue;
}

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  _FixedValue = other._FixedValue;
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return _FixedValue;
}

void Fixed::setRawBits(const int raw) {
  _FixedValue = raw;
}

float Fixed::toFloat() const {
  return (float)_FixedValue / (1 << _fractionalBits);
}

int Fixed::toInt() const {
  return _FixedValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f) {
  os << f.toFloat();
  return os;
}

