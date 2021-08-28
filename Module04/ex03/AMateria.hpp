

#ifndef CPP_STUDY_AMATERIA_HPP
#define CPP_STUDY_AMATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria {

protected:
	std::string	type;

public:
	AMateria();
	AMateria(std::string const &type);
	virtual ~AMateria();
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &copy);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#include "ICharacter.hpp"

#endif //CPP_STUDY_AMATERIA_HPP