

#ifndef CPP_STUDY_MATERIASOURCE_HPP
#define CPP_STUDY_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define COUNT_MATERIAS 4

class MateriaSource : public IMateriaSource {

private:
	AMateria	*_materias[COUNT_MATERIAS];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &copy);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
};


#endif //CPP_STUDY_MATERIASOURCE_HPP
