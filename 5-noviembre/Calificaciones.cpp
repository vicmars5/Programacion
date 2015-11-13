#include <iostream>

using namespace std;

int main () {
	int calificacion[100][10];
	int alumnos, parciales, cont, subCont, sumPromedios[10], promedios[10];
	cout << "Cuantos alumnos tienes en el grupo? ";
	cin >> alumnos;
	cout << "Cuantos parciales son?";
	cin >> parciales;
    cout << endl;
	for(cont= 0; cont<parciales; cont++){
		cout << "Parcial " << cont+1 << endl;
		sumPromedios[cont]=0;
		for(subCont= 0; subCont<alumnos; subCont++){
			cout << "[Alumno " << subCont+1 << "] Dame la calificacion del parcial"  << ": ";
			cin >> calificacion[subCont][cont];
	        sumPromedios[cont]=sumPromedios[cont]+calificacion[subCont][cont];
		}
	    promedios[cont]=sumPromedios[cont]/alumnos;
		cout << endl;
	}
	cout << endl;
	for(cont=0; cont<parciales; cont++){
	    cout << "Parcial "<< cont+1 << ": " << promedios[cont] << endl;
	}
	return 0;
}
/*
	Preguntar alumnos en grupo, pedir promedio de primer parcial, segundo, calcular promedio final
	CaLCULAR DIAGONAL DE UNA MATRIZ, Suma de lo que esta en la diagonal
*/
