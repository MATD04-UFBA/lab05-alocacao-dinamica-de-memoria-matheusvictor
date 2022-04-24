#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "tadVetorDin.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

unsigned int numElementos;  

	if (argc > 1) {
		numElementos = atoi(argv[1]);
		if (numElementos > MAX)
			numElementos = MAX;
		}
	else
		numElementos = MAX;

	cVetorDin vet1;
	cVetorDin vet2(numElementos);
	cVetorDin vet3(numElementos, -1);

	vet1.imprimeVet();
	vet2.imprimeVet();
	vet3.imprimeVet();
}
