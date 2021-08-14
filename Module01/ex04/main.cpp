//
// Created by Cherlyn Shelli on 8/13/21.
//

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    int i;
    int found;
    std::string tmp;
    std::string str;
    std::ifstream file(argv[1]);
    std::ofstream out;

    if (argc != 4)
    {
        std::cout<<"bad arg";
        exit(0);
    }
    else if (!strlen(argv[1]) || !strlen(argv[2]) || !strlen(argv[3]))
    {
        std::cout<<"bad arg";
        exit(0);
    }

    tmp = argv[1];
    out.open(tmp + ".replace");

    if (file.is_open() && out.is_open())
    {
        while(std::getline(file, tmp))
        {
            i = -1;
            while(++i < (int)tmp.length())
            {
                if ((found = tmp.find(argv[2], i)) != -1)
                {
                    tmp.erase(found, strlen(argv[2]));
                    tmp.insert(found, argv[3]);
                }
            }
            str+=tmp + "\n";
        }
        out<<str;
        file.close();
    }
    else
        std::cout<< "file not found";
}
