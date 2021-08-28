

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < COUNT_MATERIAS; ++i) {
		this->_materias[i] = 0;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < COUNT_MATERIAS; ++i) {
		if (this->_materias[i] != 0) {
			delete this->_materias[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	if (this != &copy) {
		for (int i = 0; i < COUNT_MATERIAS; ++i) {
			if (this->_materias[i] != 0) {
				delete this->_materias[i];
			}
			this->_materias[i] = copy._materias[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < COUNT_MATERIAS; ++i) {
		if (this->_materias[i] == 0) {
			this->_materias[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < COUNT_MATERIAS; ++i) {
		if (this->_materias[i] && this->_materias[i]->getType() == type) {
			return (this->_materias[i]);
		}
	}
	return 0;
}