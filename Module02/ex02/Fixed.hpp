#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# define RED "\033[1;38;2;255;0;0m"
# define GREEN "\033[1;38;2;0;200;0m"
# define BLUE "\033[1;38;2;0;0;255m"
# define BROWN "\033[1;38;2;200;60;60m"
# define RANDOM "\033[1;38;2;90;200;90m"
# define RESET "\033[0m"

class Fixed{
	
public:

	Fixed();
	Fixed( const int value );
	Fixed( const float value );
	Fixed( Fixed const & src );
	~Fixed();

	Fixed & operator = (Fixed const & result);
	int	getRawBits( void ) const;
	void setRawBits ( int const raw );
	float	toFloat ( void ) const;
	int		toInt ( void ) const;

	bool operator>(Fixed const &f) const;
	bool operator<(Fixed const &f) const;
	bool operator>=(Fixed const &f) const;
	bool operator<=(Fixed const &f) const;
	bool operator==(Fixed const &f) const;
	bool operator!=(Fixed const &f) const;

	Fixed operator+(Fixed const &f);
	Fixed operator-(Fixed const &f);
	Fixed operator*(Fixed const &f);
	Fixed operator/(Fixed const &f);

	Fixed &operator++(); // версия префикс
	Fixed& operator--(); // версия префикс
	Fixed operator++(int); // версия постфикс
	Fixed operator--(int); // версия постфикс

	static Fixed const &min(Fixed const &f1, Fixed const &f2);
	static Fixed const &max(Fixed const &f1, Fixed const &f2);
	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);

private:

	int					_fixed_point;
	static const int	_fractional_bits = 8;
};

std::ostream &	operator << (std::ostream & o, Fixed const & input);

#endif