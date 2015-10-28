#include <iostream>

using namespace std;

int main(){
	const int tam=20;
	int numeros[tam];
	int mayor=0;

	for(int contador=0; contador<tam; contador++){
		cout << "[Posicion " << contador << "] Ingresa un numero: ";
		cin >> numeros[contador];

		if(numeros[contador] > numeros[mayor]){
			mayor=contador;
		}
	}
	cout << endl;
	cout << "El numero mayor es " << numeros[mayor] << " en la posicion " << mayor;
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
