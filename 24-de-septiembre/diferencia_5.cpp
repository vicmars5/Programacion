#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    float g=80,h=1400,diferencia=0;

    do{
        diferencia=(h-g)/5;
        g+=diferencia;
        h-=diferencia;
        cout << endl << g << " - " << h << " = " << diferencia;
        getch();
    }while(diferencia>0.001);
    return 0;
}
