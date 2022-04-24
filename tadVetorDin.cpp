/* Classe Vetor Dinamico */ 

#include<iostream>

#include "tadVetorDin.h"

// ******************************************************
// ***
// ******************************************************

cVetorDin::cVetorDin() {

	maxInd 	= MAX;
	numElem = 0;

	std::cout << "objeto criado!" << std::endl;
}	

// ******************************************************
// ***
// ******************************************************

cVetorDin::cVetorDin(int n) {

	if (n > MAX)
		n = MAX;

	maxInd 	= n;
	numElem = 0;

	std::cout << "objeto criado com " << n << " elementos" << std::endl;
}	

// ******************************************************
// ***
// ******************************************************

cVetorDin::cVetorDin(int n, int val) {

	if (n > MAX)
		n = MAX;

	maxInd 	= n;
	numElem = 0;

	for (int i = 0 ; i < maxInd ; i++)
		v[numElem++] = val;

	std::cout << "objeto criado com " << n << " elementos, com valor = " << val << std::endl;

}	

// ******************************************************
// ***
// ******************************************************

cVetorDin::~cVetorDin() {

	maxInd 	= 0;
	numElem = 0;

	std::cout << "objeto destruido" << std::endl;
}	


// ******************************************************
// ***
// ******************************************************

void cVetorDin::imprimeVet() {

	for (int i = 0 ; i < numElem ; i++)
		std::cout << "v [ " << i << " ] =  " << v[i] << std::endl;
		

}

