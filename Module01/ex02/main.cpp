//
// Created by Cherlyn Shelli on 8/12/21.
//

#include <string>
#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout<<"Адресс строки str: "<<&str<<std::endl;
    std::cout<<"Адресс строки stringPTR: "<<&stringPTR<<std::endl;
    std::cout<<"Адресс строки stringREF: "<<&stringREF<<std::endl;
    std::cout<<"Строка stringPTR: "<<stringPTR<<std::endl;
    std::cout<<"Строка stringREF: "<<stringREF<<std::endl;
}

