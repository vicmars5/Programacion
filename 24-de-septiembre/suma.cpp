#include <iostream>

using namespace std;

int main () {
    float suma=0, numero=0, contador=-1;

    do {
        suma+=numero;
        cout << "Dame un numero para sumar/Cancelar 0: ";
        cin >>numero;
        contador++;
    }while(numero!=0);

    cout << "El resultado es " << (suma/contador);
    return 0;
}
