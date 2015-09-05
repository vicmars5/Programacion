#include <iostream>

using namespace std;

int main()
{
    float calificacion;

    cout << "Ingresa tu calificacion (0-100)" << endl;
    cin>>calificacion;

    if(calificacion>=0 && calificacion<=100){
        if(calificacion>=60){
            cout << "Usted aprobo";
        }else {
            cout << "Usted reprobo";
        }
    }else {
        cout << "Calificacion invalida";
    }
    return 0;
}
