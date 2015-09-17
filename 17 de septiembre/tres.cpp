#include <iostream>

using namespace std;

int main (){
    int num, sum=0;

    while (sum < 50){
    cout << "Dame un numero: " << endl;
    cin >> num;

        sum=sum+num;
        cout << endl << "Suma: " << sum << endl;
    }

    cout << endl << "FIN";
    return 0;
}
