#include <iostream>

using namespace std;

int main () {
    int a=0,b=1,c=0,cont=0;

    while(cont<20){
        c=a;
        a=b+a;
        b=c;
        cout << endl << a;
        cont++;
    }
    return 0;
}
