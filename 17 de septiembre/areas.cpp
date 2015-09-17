#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int respuesta;
    char opcion;
    float area;
    do{
        cout << "Ingresa la opcion: (C/D/T)";
        cin >> opcion;

        switch(opcion){
            case 'C':
            case 'c':
                float radio;
                cout << "Ingresa el radio del circulo: " <<endl;
                cin >> radio;
                area=(radio*radio)*3.14;
                cout << "El area es: " <<area <<endl;
                break;
            case 'D':
            case 'd':
                float lado;
                cout << "Ingresa el lado del cuadrado: ";
                cin >> lado;
                area=lado*lado;
                cout << "El area es: " <<area <<endl;
                break;
            case 'T':
            case 't':
                float base, altura;
                cout << "Ingresa la base del triangulo: " <<endl;
                cin >> base;
                cout << "Ingresa la altura del triangulo: " <<endl;
                cin >> altura;
                area=(base*altura)/2;
                cout << "El area es: " <<area <<endl;
                break;
            default:
                cout << "Opcion no valida";

        }

        cout << "Desea calcular otra area? (1-si/2-no)";
        cin >> respuesta;
    } while (respuesta==1);
    return 0;
}
