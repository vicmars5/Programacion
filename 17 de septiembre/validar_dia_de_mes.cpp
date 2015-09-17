#include <iostream>

using namespace std;

int main (){
    int dia;
    bool repetir;

    do{
        cout << "Ingresa un dia del mes: ";
        cin >> dia;

        if (dia >=1 && dia <=31){
            repetir=false;
            cout << endl << "Dia correcto";
        }else {
            cout << endl << "Dia no valido" << endl;
            repetir=true;
        }
    } while (repetir);

    return 0;
}
