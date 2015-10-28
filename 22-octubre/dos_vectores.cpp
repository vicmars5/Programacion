#include <iostream>

using namespace std;

int main(){
	int const TAM=20;
	int arregloA[TAM], arregloB[TAM], arregloC[TAM];

	for (int contador=0; contador<TAM; contador++){
		cout << "Me das un valor A[" << contador << "] ";
		cin >> arregloA[contador];
		cout << "Me das un valor B[" << contador << "] ";
		cin >> arregloB[contador];
		cout << endl;
	}
	for (int contador=0; contador<TAM; contador++){
		arregloC[contador] = arregloA[contador] + arregloB[contador];

		cout << "Suma de la pocision [" << contador << "] es " << arregloC[contador] << endl;
	}

	return 0;
}
	/*
	1
		Leer una secuencia de de 20 numeros almacenados en un vector y mostrar la
		posicion donde se encuentra el mayor valor leido
	2
		Dado 2 vectores A y B de 15 elementos cada uno obtener un vector C donde la posicion 'i'
		se almacene la suma de A[i] + B[i]
	3
		Dado una secuencia de numeros leidos y alamacenaddos en un vector A y un numero leido, determinar
		si dicho numero se encuentra o no en el vector
	*/
