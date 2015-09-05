#include <iostream>

using namespace std;

int main()
{
    float lado1, lado2, lado3;

    cout << "Lado 1:" << endl;
    cin >> lado1;

    cout << endl << "Lado 2:" << endl;
    cin >> lado2;

    cout << endl << "Lado 3:" << endl;
    cin >> lado3;

    if (lado1==lado2 && lado1==lado3) {
        cout << endl << " Es un triangulo equilatero";
    }else {
        if (lado1== lado2 || lado1==lado3 || lado2==lado3) {
            cout << endl << "Es un triangulo isosceles";
        }else {
            cout << endl << "Es un triangulo escaleno";
        }
    }
    return 0;
}
