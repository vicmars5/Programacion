#include <iostream>

using namespace std;

int main()
{
    float numero1, numero2;

    cout << "Me puedes dar un numero (a)" << endl;
    cin >> numero1;

    cout << endl << "Me puedes dar otro numero (b)" << endl;
    cin >> numero2;

    if(numero1>numero2){
        cout << endl << numero1 << " es mayor que " << numero2;
    }else {
        if(numero2 > numero1){
            cout << endl << numero2<< " es mayor que " << numero1;
        }else {
            cout << endl << "Ambos numeros son iguales";
        }
    }
    return 0;
}
