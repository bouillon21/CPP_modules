//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____BRAIN_H
#define PR____BRAIN_H

#include <iostream>
#include <string>

class Brain{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &brain);
    Brain & operator = (const Brain &brain);

    std::string *getIdeas();
    void setIdeas(std::string *ideas);
};


#endif //PR____BRAIN_H
