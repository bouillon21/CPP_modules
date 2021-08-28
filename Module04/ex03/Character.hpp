

#ifndef CPP_STUDY_CHARACTER_HPP
#define CPP_STUDY_CHARACTER_HPP

#include "ICharacter.hpp"
#define COUNT_MATERIAS 4

class Character : public ICharacter{

private:
	std::string _name;
	AMateria	*_materias[COUNT_MATERIAS];

public:
	Character();
	Character(std::string name);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif //CPP_STUDY_CHARACTER_HPP
