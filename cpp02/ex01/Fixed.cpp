/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:25:07 by hmokhtar          #+#    #+#             */
/*   Updated: 2023/02/02 10:25:07 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _rawValue(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
  std::cout << "Int constructor called" << std::endl;
  _rawValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const float value) {
  std::cout << "Float constructor called" << std::endl;
  _rawValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other) {
  std::cout << "Copy constructor called" << std::endl;
  _rawValue = other._rawValue;
}

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  _rawValue = other._rawValue;
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return _rawValue;
}

void Fixed::setRawBits(const int raw) {
  _rawValue = raw;
}

float Fixed::toFloat() const {
  return (float)_rawValue / (1 << _fractionalBits);
}

int Fixed::toInt() const {
  return _rawValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f) {
  os << f.toFloat();
  return os;
}

