

#ifndef CPP_STUDY_ICE_HPP
#define CPP_STUDY_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &copy);
	Ice &operator=(const Ice &copy);
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};


#endif //CPP_STUDY_ICE_HPP
