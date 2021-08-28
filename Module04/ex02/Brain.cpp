//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "Brain.h"

Brain::Brain() {
    std::cout << "Created Brain" << std::endl;
}

Brain::~Brain() {
    std::cout << "Destruct Brain" << std::endl;
}

Brain::Brain(const Brain &brain) {
    std::cout << "Created copy"<<std::endl;
    *this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &brain)
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    return (*this);
}

std::string *Brain::getIdeas() {
    return ideas;
}

void Brain::setIdeas(std::string *ideas) {
    for (int i = 0; i < 100; ++i) {
        this->ideas[i] = ideas[i];
    }
}
