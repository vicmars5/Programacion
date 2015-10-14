#include <iostream>

using namespace std;

int main () {
    int pisos, ancho, altura=10;
    for (int cont=0; cont < altura; cont++){
        pisos=cont*2+1;
        ancho=(((altura-1)*2+1)-pisos)/2;
        for (int conta=ancho; conta > 0; conta--){
            cout << "/" ;
        }
        for (pisos; pisos > 0; pisos--){
            cout << "*" ;
        }

        for (int conta=ancho; conta > 0; conta--){
            cout << "/" ;
        }
        cout << endl;
    }

    for(int i=4; i>0; i--){
        cout << "       |||||" << endl;
    }
    cout << "  #    |||||  # #" << endl;

    return 0;
}

/*
int main(){
    string filas[10];
    int contador, fila, espacios=0;

    for (contador=0; contador<10; contador++){

        fila=(contador-1)*2+1;
        for (espacios=contador-1; espacios >0 ; espacios --){
            cout << " ";
        }
        for (fila; fila > 0; fila --){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/
