#include <iostream>
#include <ctime>
//#include "./wait.h"

using namespace std;


float getElapsedTimeInMs(){
	//Return clock() as ms
	//1 Second = 1000 milliseconds
	return clock()/(CLOCKS_PER_SEC/1000);
}

void wait(int ms)
{
	float goal;
	goal = ms + getElapsedTimeInMs();
	//Do nothing until goal is greater than the
	//current elapsed time
	while(goal >= getElapsedTimeInMs()){};
}

int main(){
    const int MEDIO=40;
    int tam,cont, espera=100;
    string margen="", relleno="", ladoSupInf="";

    cout << "Tamaño del cuadrado";
    cin >> tam;
    cout << endl;
    if(tam>0 and tam<=80){
        for (cont=MEDIO-(tam/2); cont>0 ; cont--){
            margen+=" ";
        }
        for(int subCont=tam-2; subCont>0 ; subCont--){
            relleno+=" ";
        }

        cout << margen;
        for (cont=tam ; cont>0 ; cont--){
            cout << "*";
            wait(espera);
        }
        cout << endl;
        for (cont=tam-2 ; cont>0 ; cont --){
            cout << margen <<"*";
            wait(espera);
            cout << relleno << "*"  << endl;
            wait(espera);
        }
        cout << margen;
        for (cont=tam ; cont>0 ; cont--){
            cout << "*";
            wait(espera);
        }
        cout << endl;
    }

    return 0;
}
