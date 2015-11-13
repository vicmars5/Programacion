#include <iostream>

using namespace std;

int main () {
	string partido[4][3];
	string busqueda;
	bool encontrado=false;
	int cont;
	for (cont=0; cont<3; cont++){
		cout << "No. partido: ";
		getline(cin, partido[0][cont]);
		cout << "Local ";
		getline(cin, partido[1][cont]);
		cout << "Visitante ";
		getline(cin, partido[2][cont]);
		cout << "Marcador ";
		getline(cin, partido[3][cont]);
		cout << endl;
	}

	//Mostrar todos los partidos
	for (cont=0; cont<3; cont++){
		cout << endl;
		cout << "No. partido " << partido[0][cont] << endl;
		cout << "Local " << partido[1][cont] << endl;
		cout << "Visitante " << partido[2][cont] << endl;
		cout << "Marcador " << partido[3][cont] << endl;
	}
	cout << endl;

	//Mostrar numero del partido indicado por el usuario
	cout << "Cual partido deseas ver? [Ingresa su numero] ";
	getline(cin,busqueda);
	for (cont=0; cont<3; cont++){
		if(busqueda==partido[0][cont]){
			cout << endl;
			cout << "No. partido " << partido[0][cont] << endl;
			cout << "Local " << partido[1][cont] << endl;
			cout << "Visitante " << partido[2][cont] << endl;
			cout << "Marcador " << partido[3][cont] << endl;
			encontrado=true;
			break;
		}
	}
	if(not encontrado){
		cout << "No se encontro X(" << endl;
	}

	return 0;
}
