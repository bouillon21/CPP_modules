#include "Fixed.hpp"

Fixed::Fixed() : RawBits(0) {
	std::cout<<GREEN<<"Default constructor called"<<RESET<<std::endl;
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
	return (RawBits);
}

void		Fixed::setRawBits ( int const raw ) { 
	std::cout<<RANDOM<<"setRawBits member function called"<<RESET<<std::endl;
	RawBits = raw;
}

Fixed &	Fixed::operator = (Fixed const & value){
	std::cout<<RANDOM<<"Assignation operator called"<<RESET<<std::endl;
	if (this != &value)
		RawBits = value.getRawBits();
	return (*this);
}