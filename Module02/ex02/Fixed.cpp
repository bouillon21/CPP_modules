#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0) {
//	std::cout<<GREEN<<"Default constructor called"<<RESET<<std::endl;
}

Fixed::Fixed( const int value ) : _fixed_point(value << Fixed::_fractional_bits){
//	std::cout<<GREEN<<"Int constructor called"<<RESET<<std::endl;
}

Fixed::Fixed( const float value ) :
_fixed_point(roundf(value * (1 << Fixed::_fractional_bits))){
//	std::cout<<GREEN<<"Float constructor called"<<RESET<<std::endl;
}

Fixed::Fixed( Fixed const & src){
//	std::cout<<BLUE<<"Copy constructor called"<<RESET<<std::endl;
	*this = src;
}

Fixed::~Fixed(){
//	std::cout<<RED<<"Destructor called"<<RESET<<std::endl;
}




int			Fixed::getRawBits( void ) const { 
//	std::cout<<BROWN<<"getRawBits member function called"<<RESET<<std::endl;
	return (this->_fixed_point);
}

void		Fixed::setRawBits ( int const raw ) { 
//	std::cout<<RANDOM<<"setRawBits member function called"<<RESET<<std::endl;
	_fixed_point = raw << _fractional_bits;
}

int		Fixed::toInt ( void ) const {
	return (_fixed_point >> Fixed::_fractional_bits);
}

float	Fixed::toFloat ( void ) const {
	return ((float)_fixed_point / (float)(1 << _fractional_bits));
}




std::ostream &	operator << (std::ostream & o, Fixed const & input){
    o << input.toFloat();
    return (o);
}

Fixed &	Fixed::operator = (Fixed const & value){
//	std::cout<<RANDOM<<"Assignation operator called"<<RESET<<std::endl;
	if (this != &value)
		_fixed_point = value.getRawBits();
	return (*this);
}




bool Fixed::operator>(Fixed const &src) const
{
    return (this->_fixed_point > src._fixed_point);
}

bool Fixed::operator<(Fixed const &src) const
{
    return (this->_fixed_point < src._fixed_point);
}

bool Fixed::operator>=(Fixed const &src) const
{
    return (this->_fixed_point >= src._fixed_point);
}

bool Fixed::operator<=(Fixed const &src) const
{
    return (this->_fixed_point <= src._fixed_point);
}

bool Fixed::operator==(Fixed const &src) const
{
    return (this->_fixed_point == src._fixed_point);
}

bool Fixed::operator!=(Fixed const &src) const
{
    return (this->_fixed_point != src._fixed_point);
}




Fixed Fixed::operator+(Fixed const &src)
{
    Fixed val(*this);

    long tmp1, tmp2;

    tmp1 = ((long)this->getRawBits());
    tmp2 = ((long)src.getRawBits());
    val.setRawBits((tmp1 + tmp2));
    return val;
}

Fixed Fixed::operator-(Fixed const &src)
{
    Fixed val(*this);

    long tmp1, tmp2;

    tmp1 = ((long)this->getRawBits());
    tmp2 = ((long)src.getRawBits());
    val.setRawBits((tmp1 - tmp2));
    return val;
}

Fixed Fixed::operator*(Fixed const &src)
{
    return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(Fixed const &src)
{
    return (Fixed(this->toFloat() / src.toFloat()));
}




Fixed &Fixed::operator++()
{
    if (this->_fixed_point == 8)
    {
        this->_fixed_point = 0;
    }
    else
    {
        ++this->_fixed_point;
    }

    return *this;
}

Fixed &Fixed::operator--()
{
    if (this->_fixed_point == 0)
    {
        this->_fixed_point = 8;
    }
    else
    {
        --this->_fixed_point;
    }

    return *this;
}

Fixed Fixed::operator++(int)
{
    // Создаем временный объект класса Fixed с текущим значением переменной _fixed_point
    Fixed temp(*this);

    // Используем оператор инкремента версии префикс для реализации перегрузки оператора инкремента версии постфикс
    ++(*this); // реализация перегрузки

    // Возвращаем временный объект
    return temp;
}

Fixed Fixed::operator--(int)
{
    // Создаем временный объект класса Fixed с текущим значением переменной f_point
    Fixed temp(*this);

    // Используем оператор инкремента версии префикс для реализации перегрузки оператора инкремента версии постфикс
    --(*this); // реализация перегрузки

    // Возвращаем временный объект
    return temp;
}




Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}