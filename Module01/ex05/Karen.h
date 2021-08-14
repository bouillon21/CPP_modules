//
// Created by Cherlyn Shelli on 8/14/21.
//

#ifndef PR____KAREN_H
#define PR____KAREN_H


#include <string>

class Karen {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    std::string	arrayLevels[4];
    typedef  void (Karen::*Methods) (void);
    Methods arrayMethods[4]; // массив указателей на ф-ии
public:
    void complain( std::string level );
    Karen();
    ~Karen();
};


#endif //PR____KAREN_H
