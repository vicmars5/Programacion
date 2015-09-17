#include <iostream>

using namespace std;

int main (){
    int cal=0, sum=0, cont=0;
    float prom;
    do{
        cout << endl << "Dame una calificacion" << endl;
        cin >> cal;
        if(cal>=0 && cal <=100){
            sum=sum+cal;
            cont++;
        }
        else{
            if (cal != 999){
                cout << "Calificacion invalida";
            }
        }
    }while(cal!=999);
    prom=sum/cont;
    cout << endl << endl << "El promedio es " << prom;

    return 0;
}
