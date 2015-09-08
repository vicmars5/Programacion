#include <iostream>

using namespace std;

int main(){
	int dia;
	cout << "Dias de la semana"
		<< endl << "1.-Lunes"
		<< endl << "2.-Martes"
		<< endl << "3.-Miercoles"
		<< endl << "4.-Jueves"
		<< endl << "5.-Viernes"
		<< endl << "6.-Sabado"
		<< endl << "7.-Domingo"
		<< endl;
	cin >> dia;
	if(dia==1){
		cout << "Lunes";
	}
	else{
		if(dia==2){
			cout << "Martes";
		}
		else {
			if(dia==3){
				cout << "Miercoles";
			}
			else {
				if(dia==4){
					cout << "Jueves";
				}
				else {
					if(dia==5){
						cout << "Viernes";
					}
					else {
						if(dia==6){
							cout << "Sabado";
						}
						else {
							if(dia==7){
								cout << "Domingo";
							}
							else{
								cout << "Dia no existente";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
