#ifndef CPP_STUDY_SCALAR_HPP
#define CPP_STUDY_SCALAR_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <climits>
# include <iomanip>
# include <exception>

class Scalar {

private:
	std::string	_str;
	double		_longNum;
	int 		_sign;
	bool 		_isPoint;
	void toInt();
	void toChar();
	void toFloat();
	void toDouble();
	void parse();

public:
	Scalar();
	~Scalar();
	Scalar(const Scalar &copy);

	Scalar &operator=(const Scalar &copy);


	void Convert(std::string str);
};


#endif //CPP_STUDY_SCALAR_HPP
