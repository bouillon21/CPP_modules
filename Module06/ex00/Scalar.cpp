#include "Scalar.hpp"

Scalar::Scalar() : _sign(1), _isPoint(false) {}

Scalar::~Scalar() {}

Scalar::Scalar(const Scalar &copy) {
	*this = copy;
}

Scalar &Scalar::operator=(const Scalar &copy) {
	if (this != &copy) {
		this->_str = copy._str;
		this->_longNum = copy._longNum;
		this->_isPoint = copy._isPoint;
	}
	return *this;
}

void Scalar::parse() {
	if (_str.empty()) {
		throw std::string("EMPTY ARGUMENT");
	}
	if (_str.length() > 1) {
		int i;
		for (i = 0; std::string("\t\v\f\r\n ").find(_str[i], 0) != std::string::npos; ++i) {}
		if (i == _str.length())
			throw std::string("EMPTY ARGUMENT");
		_str = _str.substr(i);
		if (_str == "nan" || _str == "nanf") {
			_longNum = NAN;
			return ;
		}
		if (_str[i] == '-' || _str[i] == '+') {
			if (!(std::isdigit(static_cast<unsigned char>(_str[i + 1]))))
				throw std::string("IS NOT DIGIT");
			if (_str[i] == '-')
				_sign = -1;
			++i;
		}
		_str = _str.substr(i); // вырезаем, начиная с символа ПОСЛЕ пробела и до конца строки
		if (_str == "inf" || _str == "inff") {
			_longNum = INFINITY * _sign;
			return ;
		}
		if (_str.length() > 1) {
			for (i = 0; i < _str.length(); ++i) {
				if (_str[i] == '.') {
					if (_isPoint == true || i == _str.length() - 1)
						throw std::string("IS NOT DIGIT");
					_isPoint = true;
				}
				else if (!(std::isdigit(static_cast<unsigned char>(_str[i]))))
					break;
			}
			if (i != _str.length()) {
				if (!(i + 1 == _str.length() && _str[i] == 'f' && _isPoint == true))
					throw std::string("IS NOT DIGIT");
			}
			_longNum = atof(_str.c_str()) * _sign;
		}
	}
	if (_str.length() == 1) {
		if (_str[0] >= '0' && _str[0] <= '9')
			_str[0] -= '0';
		_longNum = static_cast<double>(_str[0]) * _sign;
	}
}

void Scalar::toChar() {
	char c;

	if (std::isnan(_longNum)) {
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (_longNum == INFINITY || _longNum == -INFINITY) {
		std::cout << "char: " << _longNum << std::endl;
		return ;
	}
	if (_longNum < CHAR_MAX && _longNum > CHAR_MIN) {
		c = static_cast<char>(_longNum);
		if (std::isgraph(static_cast<unsigned char>(c))) {
			std::cout << "char: " << c << std::endl;
		}
		else {
			std::cout << "char: Non displayable" << std::endl;
		}
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
	}
}

void Scalar::toFloat() {
	float	f;

	f = static_cast<float>(_longNum);
	int precition = 1;
	if (_str.find(".") != std::string::npos && _str.length() - _str.find(".") - 1 > 0)
		precition = _str.length() - _str.find(".") - 1;
	if (_str[_str.length() - 1] == 'f')
		precition--;
	std::cout << std::fixed << std::setprecision(precition) << "float: " << f << "f" << std::endl;

}

void Scalar::toDouble() {
	int precition = 1;
	if (_str.find(".") != std::string::npos && _str.length() - _str.find(".") - 1 > 0)
		precition = _str.length() - _str.find(".") - 1;
	if (_str[_str.length() - 1] == 'f')
		precition--;
	std::cout << std::fixed << std::setprecision(precition) << "double: " << _longNum << std::endl;
}

void Scalar::toInt() {
	if (_longNum == INFINITY || _longNum == -INFINITY) {
		std::cout << "int: " << _longNum << std::endl;
		return ;
	}
	if (_longNum < static_cast<double>(INT_FAST32_MAX) && _longNum > INT32_MIN) {
		std::cout << "int: " << static_cast<int>(_longNum) << std::endl;
	}
	else {
		std::cout << "int: impossible" << std::endl;
	}
}

void Scalar::Convert(std::string argv)
{
	_str = argv;
	parse();
	toChar();
	toInt();
	toFloat();
	toDouble();
}