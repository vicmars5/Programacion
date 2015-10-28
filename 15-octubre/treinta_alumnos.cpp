#include <iostream>

using namespace std;

int main(){
	int cals[5], busqueda;

	for (int i=0; i<5; i++){
		cout << "Hola, me podrias dar una calificacion";
		cin >> cals[i];
	}

	cout << "Que alumno desea encontrar?";
	cin >> busqueda;

	cout << "Su calificacion es " << cals[busqueda-1];
	return 0;
}
