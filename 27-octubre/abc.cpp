#include <iostream>

using namespace std;

int main (){
	char abecedario[26];
	int posicion=0;

	for(int cont='Z' ; cont >= 'A' ; cont--){
		abecedario[posicion]=cont;
		cout << abecedario[posicion] << endl;
		posicion++;
	}
	return 0;
}
