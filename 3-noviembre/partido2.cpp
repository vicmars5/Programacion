#include <iostream>

using namespace std;

int main () {
	string partido[4][2];
	int cont;
	for (cont=0; cont<2; cont++){
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

	cout << "Part.\tLocal\tVisit.\tMarcador" << endl;
	for (cont=0; cont<2; cont++){
		cout << partido[0][cont] << "\t" << partido[1][cont] << "\t" << partido[2][cont] << "\t" << partido[3][cont] << endl;
	}
	return 0;
}
