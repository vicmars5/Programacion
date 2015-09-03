#include <iostream>

using namespace std;

int main()
{
	int monto,
	cantidad_500, cantidad_200, cantidad_100, cantidad_50, cantidad_20, cantidad_10, cantidad_5, cantidad_2, cantidad_1;

    cout << "Cuando dinero(MXN) desea retirar" << endl;
    cin >> monto;

    cantidad_500 = monto/500;
    monto=monto-cantidad_500*500;

    cantidad_200 = monto/200;
    monto=monto-cantidad_200*200;

    cantidad_100 = monto/100;
    monto=monto-cantidad_100*100;

    cantidad_50 = monto/50;
    monto=monto-cantidad_50*50;

    cantidad_20 = monto/20;
    monto=monto-cantidad_20*20;

    cantidad_10 = monto/10;
    monto=monto-cantidad_10*10;

    cantidad_5 = monto/5;
    monto=monto-cantidad_5*5;

    cantidad_2 = monto/2;
    monto=monto-cantidad_2*2;

    cantidad_1 = monto/1;
    monto=monto-cantidad_1*1;

    cout << endl <<cantidad_500 << " billetes de 500"
    	<< endl <<cantidad_200 << " billetes de 200"
    	<< endl <<cantidad_100 << " billetes de 100"
    	<< endl <<cantidad_50 << " billetes de 50"
    	<< endl <<cantidad_20 << " billetes de 20"
    	<< endl <<cantidad_10 << " monedas de 10"
    	<< endl <<cantidad_5 << " monedas de 5"
    	<< endl <<cantidad_2 << " monedas de 2"
    	<< endl <<cantidad_1 << " monedas de 1" ;

    return 0;
}
