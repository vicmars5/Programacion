#include <iostream>

using namespace std;

int main(){
    int asteriscos=1, contador=1, suma=0;

    while(contador <= 100){
        suma+=asteriscos;
        asteriscos+=2;
        cout << endl << asteriscos;
        contador++;
    }

    cout << endl << endl<< "Cantidad de asteriscos " << suma;
    return 0;
}
