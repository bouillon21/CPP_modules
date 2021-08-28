

#include "Character.hpp"

Character::Character() {};

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0; i < COUNT_MATERIAS; ++i) {
		this->_materias[i] = 0;
	}
}

Character::~Character() {};

const std::string &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < COUNT_MATERIAS; ++i) {
		if (this->_materias[i] == 0) {
			this->_materias[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx) {
	if ((idx >= 0 && idx < COUNT_MATERIAS) && this->_materias[idx] != 0) {
		this->_materias[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target) {
	if ((idx >= 0 && idx < COUNT_MATERIAS) && this->_materias[idx] != 0) {
		this->_materias[idx]->use(target);
	}
}