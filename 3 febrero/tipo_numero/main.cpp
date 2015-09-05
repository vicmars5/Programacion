#include <iostream>

using namespace std;

int main()
{
    float numero;
    cout << "Me puedes dar un numero" << endl;
    cin >> numero;

    if(numero > 0){
        cout << endl << "El numero es positivo";
    }else{
        if(numero < 0){
            cout << endl << "El numero es negativo";
        }else {
            cout << endl << "El numero es neutro";
        }
    }
    return 0;
}
