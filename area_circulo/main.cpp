#include <iostream>

using namespace std;

int main()
{
    const float PI=3.1416;
    float radio, area;

    cout << "Me podrias decir el radio de un circulo? " << endl;
    cin >> radio;
    area=PI*(radio*radio);
    cout << endl << "El area de su circulo es " << area << endl << endl;
    return 0;
}
