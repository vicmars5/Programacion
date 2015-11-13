#include <iostream>

using namespace std;

int main (){
	int matriz[100][100];
	int tam, suma=0, cont, subCont;
	cout << "Tamano de la matriz cuadrada: ";
	cin >> tam;

	for (cont=0; cont<tam; cont++){
		for (subCont=0; subCont<tam; subCont++){
			cout << "[" << cont << "," << subCont << "] :";
			cin >> matriz[cont][subCont];
		}
		suma=suma+matriz[cont][cont];
	}
	cout << "Suma " << suma;
	return 0;
}

/*
Ordenar nombres alfabeticamente
*/
