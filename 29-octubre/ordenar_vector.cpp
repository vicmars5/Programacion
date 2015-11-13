#include <iostream>

using namespace std;

int main (){
	int vector[10]={0,0,0,0,0,0,0,0,0,0};
	int registros=0, entrada=0, temporal=0, cont=0;

	for(cont=0; cont < 10; cont++){
		cout << "Ingresa un numero ";
		cin >> entrada;
        for(int subCont1=0; subCont1<=registros; subCont1++){
            if(entrada>=vector[subCont1]){
                for(int subCont2=9; subCont2>subCont1; subCont2--){
                    vector[subCont2]=vector[subCont2-1];
                }
                vector[subCont1]=entrada;
                break;
            }
        }
		registros++;
	}

    for(cont=0; cont<10; cont++){
        cout << vector[cont] << endl;
    }

	return 0;
}
//descendente
