#include <iostream>

using namespace std;

int main(){
    int suma=0, numero;
    for (int x=0;x<10;x++){
        cout << endl << "Dame un numero: ";
        cin >> numero;
        if((numero%2)==0){
            suma=suma+numero;
        }
    }
    cout << endl << endl << "total " << suma ;
    return 0;
}
