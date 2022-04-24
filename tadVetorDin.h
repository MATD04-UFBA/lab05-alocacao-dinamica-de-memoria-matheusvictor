/* Classe Vetor Dinamico */ 

#include<iostream>
#include<string>

#define MAX 100

class cVetorDin	{ 

private: 

	int v[MAX];
	int maxInd;
	int numElem;

public:

	cVetorDin();	
	cVetorDin(int n);	
	cVetorDin(int n, int val);	

	~cVetorDin();

	void imprimeVet();

};

