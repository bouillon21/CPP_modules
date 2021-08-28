

#include "AMateria.hpp"

AMateria::AMateria() : type("") {};

AMateria::AMateria(const std::string &type) : type(type) {};

AMateria::~AMateria() {};

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy) {
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

const std::string &AMateria::getType() const {
	return this->type;
}
