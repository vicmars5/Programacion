#include <iostream>

using namespace std;

int main()
{
    float numero1, numero2, numero3;

    cout << "Dame un numero" << endl;
    cin >> numero1;

    cout <<endl << "Dame un segundo numero" << endl;
    cin >> numero2;

    cout << endl << "Dame un tercer numero" << endl;
    cin >> numero3;

    if(numero1>numero2 && numero1>numero3){
        cout << numero1 << " es el mayor de los numeros";
    }else{
        if(numero2>numero1 && numero2>numero3){
            cout << numero2 << " es el mayor de los numeros";
        }else{
            if(numero3>numero1 && numero3>numero2){
                cout << endl << numero3 << " es el maoyr de los numeros";
            }else{
                if(numero1==numero2 && numero1>numero3){
                    cout << endl << numero1 << " y " << numero2 << " son mayores que el otro numero" ;
                }else {
                    if(numero2==numero3 && numero2>numero1){
                        cout << endl << numero2 << " y " << numero3 << " son mayores que el otro numero";
                    }else {
                        if(numero3== numero1 && numero3>numero2){
                            cout << endl << numero3 << " y " << numero1 << " son mayores que el otro numero";
                        }else{
                            cout << endl << "Todos los numeros son iguales";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
