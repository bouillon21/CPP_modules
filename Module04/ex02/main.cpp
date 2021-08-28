//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "AAnimal.h"
#include "Cat.h"
#include "Dog.h"

#define COUNT_ANIMALS 4

int main() {
	// AAnimal test = AAnimal();
	AAnimal	*arrayAnimals[COUNT_ANIMALS];

	for (int i = 0; i < COUNT_ANIMALS; ++i) {
		if (i < COUNT_ANIMALS / 2) {
			arrayAnimals[i] = new Dog();
		}
		else {
			arrayAnimals[i] = new Cat();
		}
	}
	//
	for (int i = 0; i < COUNT_ANIMALS; ++i) {
		delete arrayAnimals[i];
	}
}
