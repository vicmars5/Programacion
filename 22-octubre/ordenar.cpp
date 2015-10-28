#include <iostream>

using namespace std;

int main(){
	const int TAM=20;
	int vector[TAM];
	int temporal=0, contador=0, mayor=0, procesados=1;


	for (contador=0; contador<TAM; contador++){
		cout << "[Posicion " << contador << "] Dame un numero ";
		cin >> vector[contador];
	}

	do{
		mayor=0;
		for(contador=0; contador<=(TAM-procesados); contador++){
			if(vector[contador] > vector[mayor]){
				mayor=contador;
			}
		}
		temporal=vector[TAM-procesados];
		vector[TAM-procesados]=vector[mayor];
		vector[mayor]=temporal;
		mayor=0;
		procesados++;
	}while(procesados<TAM);

	for(contador=0; contador<TAM; contador++){
		cout << "[Posicion " << contador << "] = " << vector[contador] << endl;
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

ADMINISTRACION DE REDES
	
*/
