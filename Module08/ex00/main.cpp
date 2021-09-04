//
// Created by Cherlyn Shelli on 9/4/21.
//

#include "iostream"
#include "easyfind.h"
#include <list>
#include <vector>


template<typename T>
void search_data(T &container, int n)
{
    if (easyfind(container, n) != container.end())
        std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
    else
        std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
}

int main()
{
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "Lists tests: " << std::endl;

    std::list<int>	l;
    int	n = 10;
    l.push_back(n);
    search_data(l, n);
    n = 20;
    l.push_back(n);
    search_data(l, n);
    search_data(l, 30);

    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "Vectors tests: " << std::endl;

    std::vector<int>	vec;
    n = 100;
    vec.push_back(n);
    search_data(vec, n);
    n = 200;
    vec.push_back(n);
    search_data(vec, n);
    search_data(vec, 300);
}
