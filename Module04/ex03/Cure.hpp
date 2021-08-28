

#ifndef CPP_STUDY_CURE_HPP
#define CPP_STUDY_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &copy);
	Cure &operator=(const Cure &copy);
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};


#endif //CPP_STUDY_CURE_HPP
