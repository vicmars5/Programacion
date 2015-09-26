#include <iostream>

using namespace std;

int main(){
    int numero;
    cout << "   Dame un numero" << endl;
    cin >> numero;

    for (int x=1;x<=12;x++){
        cout << endl << numero << " x " << x << " = " << (numero*x);
    }

    return 0;
}
