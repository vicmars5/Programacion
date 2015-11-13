#include <iostream>
#include <cstring>

using namespace std;

int main () {
	string nombre[100];
	string temporal;
	int tam, cont, mayor=0, procesados=1, comp;
	cout << "Cantidad de nombres";
	cin >> tam;
	cin.ignore();
	for(cont=0; cont<tam; cont++){
		cout << "[" << cont << "]Nombre: ";
		getline(cin,nombre[cont]);
	}
	do{
		for(cont=0; cont<=(tam-procesados); cont++){
			if(nombre[cont].compare(nombre[mayor])>0){
				mayor=cont;
			}

		}
		temporal=nombre[tam-procesados];
		nombre[tam-procesados]=nombre[mayor];
		nombre[mayor]=temporal;
		mayor=0;
		procesados++;
	}while(procesados<tam);
    cout << endl;
    for (cont=0; cont<tam; cont++){
        cout << nombre[cont] << endl;
    }
	return 0;
}

/*
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
*/
