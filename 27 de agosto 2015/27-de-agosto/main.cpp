#include <iostream>

using namespace std;
int main()
{
    float primer_numero, segundo_numero, total;
    cout << "Me puedes dar un numero? " << endl;
    cin >> primer_numero;
    cout << "Me puedes dar otro numero?" << endl;
    cin>> segundo_numero;
    total=primer_numero + segundo_numero;
    cout << endl << endl << "La suma de estos dos numeros es: " << total;
    return 0;
}
