/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:45:45 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/22 17:06:07 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
	private:
		int					fixedPointValue;
		static int const	fractionalBits = 8;
	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed& original);
		Fixed& operator=(const Fixed& original);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		bool				operator>(const Fixed& right) const;
		bool				operator<(const Fixed& right);
		bool				operator>=(const Fixed& right);
		bool				operator<=(const Fixed& right);
		bool				operator==(const Fixed& right);
		bool				operator!=(const Fixed& right);
		
		Fixed 				operator+(const Fixed& right);
		Fixed 				operator-(const Fixed& right);
		Fixed 				operator*(const Fixed& right);
		Fixed 				operator/(const Fixed& right);

		Fixed&				operator++();
		Fixed				operator++(int);
		Fixed&				operator--();
		Fixed				operator--(int);

		static Fixed&		min(Fixed& A, Fixed& B);
		static const Fixed&		min(const Fixed& A, const Fixed& B);
		static Fixed&		max(Fixed& A, Fixed& B);
		static const Fixed&		max(const Fixed& A, const Fixed& B);
};

std::ostream&		operator<<(std::ostream& out, const Fixed& toPrint);
