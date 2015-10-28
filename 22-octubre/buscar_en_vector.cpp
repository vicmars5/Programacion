#include <iostream>

using namespace std;

int main(){
	const int TAM=5;
	int vector[TAM];
	int busqueda;
	bool encontrado=false;

	for (int contador=0 ; contador<TAM ; contador++){
		cout << "[Posicion " << contador << "] Ingresa un numero";
		cin >> vector[contador];
	}
	cout << endl;
	cout << "Ingresa un numero para buscarlo en tu arreglo";
	cin >> busqueda;
	
	for (int contador=0; contador<TAM ; contador++) {
		if(vector[contador]==busqueda){
			encontrado=true;
		}
	}

	cout << endl;
	
	if(encontrado){
		cout << "Encontrado";
	}else{
		cout << "No encontrado";
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
