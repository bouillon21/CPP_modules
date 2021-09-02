#include "Scalar.hpp"

int main (int argc, char **argv) {
	if (argc != 2){
		std::cout<<"Wrong args number"<<std::endl;
		return (0);
	}
	try {
		Scalar	obj;
		obj.Convert(argv[1]);
	}
	catch (std::string &e) {
		std::cout << "Error: " << e << std::endl;
	}
}