#include <iostream>

using namespace std;

int main(){
    int contador=1, suma=0, asteriscos;

    while(contador <= 50){
        asteriscos=contador*contador;
        suma+=asteriscos;
        cout << endl << suma;
        contador++;
    }

    //cout << endl << endl<< "Cantidad de asteriscos " << suma;
    return 0;
}
