#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0) {
	std::cout<<GREEN<<"Default constructor called"<<RESET<<std::endl;
}

Fixed::Fixed( const int value ) : _fixed_point(value << Fixed::_fractional_bits){
	std::cout<<GREEN<<"Int constructor called"<<RESET<<std::endl;
}

Fixed::Fixed( const float value ) :
_fixed_point(roundf(value * (1 << Fixed::_fractional_bits))){
	std::cout<<GREEN<<"Float constructor called"<<RESET<<std::endl;
}

Fixed::~Fixed(){
	std::cout<<RED<<"Destructor called"<<RESET<<std::endl;
}

Fixed::Fixed( Fixed const & src){
	std::cout<<BLUE<<"Copy constructor called"<<RESET<<std::endl;
	*this = src;
}

int			Fixed::getRawBits( void ) const { 
	std::cout<<BROWN<<"getRawBits member function called"<<RESET<<std::endl;
	return (_fixed_point);
}

void		Fixed::setRawBits ( int const raw ) { 
	std::cout<<RANDOM<<"setRawBits member function called"<<RESET<<std::endl;
	_fixed_point = raw << _fractional_bits;
}

Fixed &	Fixed::operator = (Fixed const & value){
	std::cout<<RANDOM<<"Assignation operator called"<<RESET<<std::endl;
	if (this != &value)
		_fixed_point = value.getRawBits();
	return (*this);
}

int		Fixed::toInt ( void ) const {
	return (_fixed_point >> Fixed::_fractional_bits);
}

float	Fixed::toFloat ( void ) const {
	return ((float)_fixed_point / (float)(1 << _fractional_bits));
}

std::ostream &	operator << (std::ostream & o, Fixed const & input){
	return (o << input.toFloat());
}