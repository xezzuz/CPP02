/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:57:50 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/19 19:21:07 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default Constructor Called\n";
	fixedPointValue = 0;
}

Fixed::Fixed(const Fixed& original) {
	std::cout << "Copy Constructor Called\n";
	*this = original;
	// fixedPointValue = original.fixedPointValue;
}

Fixed& Fixed::operator=(const Fixed& original) {
	std::cout << "Copy Assignment Operator Called\n";
	fixedPointValue = original.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor Called\n";
}

int 	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return fixedPointValue;
}

void 	Fixed::setRawBits(int const raw) {
	fixedPointValue = raw;
}
