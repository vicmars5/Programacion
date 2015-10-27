#include<iostream>

using namespace std;

int main(){
	int dia, mes;
	int ano;
	bool mostrar=false;

	cout << "Ingresa el dia" << endl;
	cin >> dia;

	cout << "Ingresa el mes" << endl;
	cin >> mes;

	cout << "Ingresa el ano" << endl;
	cin >> ano;

	if(dia>0 && mes>0){

		if((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && dia<=31){
			mostrar=true;
		}
		else{
			if((mes==4 || mes==6 || mes==9 || mes==11) && dia<=30){
				mostrar=true;
			}
			else{
				if( (ano%4) == 0 ){
					if(dia<=29 && mes==2){
						mostrar=true;
					}
				} else {
					if(dia<=28 && mes==2){
						mostrar=true;
					}
				}
			}
		}
	}

	if(mostrar){
		cout << dia << " de ";
		switch(mes){
			case 1:
				cout << "Enero";
				break;

			case 2:
				cout << "Febrero";
				break;

			case 3:
				cout << "Marzo";
				break;

			case 4:
				cout << "Abril";
				break;

			case 5:
				cout << "Mayo";
				break;

			case 6:
				cout << "Junio";
				break;

			case 7:
				cout << "Julio";
				break;

			case 8:
				cout << "Agosto";
				break;

			case 9:
				cout << "Septiembre";
				break;

			case 10:
				cout << "Octubre";
				break;

			case 11:
				cout << "Noviembre";
				break;

			case 12:
				cout << "Diciembre";
				break;
		}

		cout << " del " << ano;
	} else {
		cout << "Fecha invalida " << endl;
	}
	return 0;
}


