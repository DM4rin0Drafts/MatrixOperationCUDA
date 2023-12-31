#include <iostream>
#include <cstdlib>

#include "filtering.h"

int main(int argc, char **argv)
{
	//first argument /gris/gris-f/homelv/dmarino/Exercises/ex2/cornellBoxSphere_512x512.ppm
	//second argument kernelsize = 3
	if (argc != 3) {
		std::cerr << "Incorrect number of arguments" << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << "PMPP Hello World!" << std::endl;

	const char *fn = argv[1];
	int ks = std::atoi(argv[2]);

	filtering(fn, ks);

	return EXIT_SUCCESS;
}
