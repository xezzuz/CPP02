/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:45:57 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/22 13:33:52 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default Constructor Called\n";
	fixedPointValue = 0;
}

Fixed::Fixed(const int integer) {
	std::cout << "Int constructor called\n";
	fixedPointValue = integer << fractionalBits;
}

Fixed::Fixed(const float floating) {
	std::cout << "Float constructor called\n";
	fixedPointValue = roundf(floating * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& original) {
	std::cout << "Copy Constructor Called\n";
	// fixedPointValue = original.getRawBits();
	*this = original;
}

Fixed& Fixed::operator=(const Fixed& original) {
	std::cout << "Copy Assignment Operator Called\n";
	fixedPointValue = original.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor Called\n";
}

std::ostream&		operator<<(std::ostream& out, const Fixed& toPrint) {
	out << toPrint.toFloat();
	return out;
}

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return fixedPointValue;
}

void		Fixed::setRawBits(int const raw) {
	fixedPointValue = raw;
}

float		Fixed::toFloat(void) const {
	return static_cast<float>(fixedPointValue) / (1 << fractionalBits);
}

int			Fixed::toInt(void) const {
	return fixedPointValue >> fractionalBits;
}


