#include "iostream"

using namespace std;

int main () {
	string flotantes[2][3][3]; //dias, hora, status;
	string hora;
	int cont, subCont;

	for(cont=0; cont < 2; cont++){
		cout << "Dia " << cont+1 << endl;
		for (subCont=0; subCont<3; subCont++){
            switch (subCont){
                case 0:
                    hora="Mañana";
                    break;
                case 1:
                    hora="Tarde";
                    break;
                case 2:
                    hora="Noche";
            }
			cout << hora << endl;
			cout << "Humedad";
			cin >> flotantes[cont][subCont][0];
			cout << "Temperatura";
			cin >> flotantes[cont][subCont][1];
			cout << "Entes";
			cin >> flotantes[cont][subCont][2];
			cout << endl;
		}
		cout << endl;
	}

	for(cont=0; cont < 2; cont++){
		cout << "Dia " << cont+1 << endl;
		for (subCont=0; subCont<3; subCont++){
            switch (subCont){
                case 0:
                    hora="Mañana";
                    break;
                case 1:
                    hora="Tarde";
                    break;
                case 2:
                    hora="Noche";
            }
			cout << subCont << endl;
			cout << "Humedad" << flotantes[cont][subCont][0] << endl;
			cout << "Temperatura" << flotantes[cont][subCont][1] << endl;
			cout << "Entes" << flotantes[cont][subCont][2] << endl;
		}
		cout << endl;
	}


}
