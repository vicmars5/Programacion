#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	const float PRECIO1=8;//Cabeza
	const float PRECIO2=10;//Pastor
	const float PRECIO3=12;//Arrachera
	const float IVA=0.16;

	float articulo1 ,articulo2, articulo3, total, pago, cambio;

	cout << "	TACOS"  << endl;
	cout << "Dame la cantidad de Cabeza (" << PRECIO3 << ")" << endl;
	cin >> articulo1;
	cout << "Dame la cantidad de Pastor (" << PRECIO2 << ")" << endl;
	cin >> articulo2;
	cout << "Dame la cantidad de Arrachera (" << PRECIO1 << ")" << endl;
	cin >> articulo3;

	total= articulo1*PRECIO1 + articulo2*PRECIO2 + articulo3*PRECIO3;
	total= total + total*IVA;

	cout << "Total a pagar $" << total << ". Ingresa la cantidad con la que pagaras: " << endl;
	cin >> pago;

	if(pago > total){
		cambio= pago - total;
		cout << "Su cambio es de " << cambio<< endl;
	} else {
		if(pago == total){
			cout << "No hay cambio" << endl;
		} else {
			cout << "Dinero insuficiente" << endl;
		}
	}

	return 0;
}
