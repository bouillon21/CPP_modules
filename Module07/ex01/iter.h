//
// Created by Cherlyn Shelli on 9/4/21.
//

#ifndef PR____ITER_H
#define PR____ITER_H

#include <iostream>

template <typename T>
void	iter(T *addr, size_t len, void(*Foo)(T const &)) {
    for (size_t i = 0; i < len; ++i) {
        Foo(addr[i]);
    }
}

#endif //PR____ITER_H
