#include <iostream>

using namespace std;

int main()
{
    float far, cel;
    cout << "Prodria darme una temperatura en grados Celcius" << endl ;
    cin >> cel;
    far=cel*1.8+32;
    cout << endl << "Su temperatura equivale a "<< far <<" grados Farenheit" << endl << endl;
    return 0;
}
