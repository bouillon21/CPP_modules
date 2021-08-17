#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# define RED "\033[1;38;2;255;0;0m"
# define GREEN "\033[1;38;2;0;200;0m"
# define BLUE "\033[1;38;2;0;0;255m"
# define BROWN "\033[1;38;2;200;60;60m"
# define RANDOM "\033[1;38;2;90;200;90m"
# define RESET "\033[0m"

class Fixed{
	
public:

	Fixed();
	Fixed( Fixed const & src );
	~Fixed();
	
	Fixed & operator = (Fixed const & result);
	int		getRawBits( void ) const;
	void	setRawBits ( int const raw );

private:

	int					RawBits;
	static const int	_fractional_bits = 8;
};

#endif