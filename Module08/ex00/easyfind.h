//
// Created by Cherlyn Shelli on 9/4/21.
//

#ifndef PR____EASYFIND_H
#define PR____EASYFIND_H

#include <iostream>
#include <algorithm>
template<typename T>
typename T::iterator easyfind(T &container, int n) {
	return std::find(container.begin(), container.end(), n);
}

#endif //PR____EASYFIND_H
