/* Classe Vetor Dinamico */ 

#include<iostream>

#include "tadVetorDin.h"

// ******************************************************
// ***
// ******************************************************

cVetorDin::cVetorDin() {

	v = new int[100]; // instancia que irá alocar o espaço de memória que v irá usar. Porém, o endereço de v
					 // só poderá ser conhecido no momento de execução

	maxInd 	= MAX;
	numElem = 0;
	
	std::cout << "vetor alocado em: " << v << std::endl;
	std::cout << "objeto criado!" << std::endl;
}	

// ******************************************************
// ***
// ******************************************************

cVetorDin::cVetorDin(int n) {

	v = new int[n];

	if (v == NULL) {
		maxInd = 0;
	} else {
		maxInd 	= n;
	}

	numElem = 0;
	
	std::cout << "vetor alocado em: " << v << std::endl;
	std::cout << "objeto criado com " << maxInd << " elementos" << std::endl;
}	

// ******************************************************
// ***
// ******************************************************

cVetorDin::cVetorDin(int n, int val) {

	v = new int[n];

	if (v == NULL) {
		maxInd = 0;
	} else {
		maxInd 	= n;
	}

	numElem = 0;

	for (int i = 0 ; i < maxInd ; i++)
		v[numElem++] = val;

	std::cout << "vetor alocado em: " << v << std::endl;
	std::cout << "objeto criado com " << n << " elementos, com valor = " << val << std::endl;

}	

// ******************************************************
// ***
// ******************************************************

cVetorDin::~cVetorDin() {

	delete[] v; // realiza desalocação do espaço de memória reservado por v
	v = NULL; // muda o endereço de memória para 0 (end. de nulo)

	maxInd 	= 0;
	numElem = 0;
	
	std::cout << "vetor desalocado em: " << v << std::endl;
	std::cout << "objeto destruido" << std::endl;
}	

// ******************************************************
// ***
// ******************************************************

void cVetorDin::imprimeVet() {

	std::cout << "Vetor com " << maxInd << " posicoes alocadas, sendo " << numElem << " ocupados." << std::endl;

	for (int i = 0 ; i < numElem ; i++)
		std::cout << "v [ " << i << " ] =  " << v[i] << std::endl;
	
}

