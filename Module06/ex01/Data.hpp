#ifndef CPP_STUDY_DATA_HPP
#define CPP_STUDY_DATA_HPP

#include <iostream>

struct	Data
{
	int	p;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif //CPP_STUDY_DATA_HPP
