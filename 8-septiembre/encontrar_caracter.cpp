#include <iostream>

using namespace std;

int main(){
	char caracter;

	cout << "Ingresa un caracter, letra o numero";
	cin >> caracter;
	if(caracter>=48 && caracter<=57){
        cout << "Numero";
	}
	else {
        if(caracter >= 65 && caracter <=90){
            cout << "Mayuscula";
        } else{
            if (caracter >=97 && caracter <= 122){
                cout << "Minuscula";
            }
            else {
                cout << "Otra cosa";
            }
        }
	}
}
