#include <iostream>

int main()
{
    float a1 ,a2, a3, a4, a5;
    float prec1=5, prec2=7, prec3=3, prec4=11, prec5=3,
    	total=3;
    std::cout<<"Cantidad de articulo 1: "<<std::endl;
    std::cin>>a1;

    std::cout<<"Cantidad de articulo 2: "<<std::endl;
    std::cin>>a2;

    std::cout<<"Cantidad de articulo 3: "<<std::endl;
    std::cin>>a3;

    std::cout<<"Cantidad de articulo 4: "<<std::endl;
    std::cin>>a4;

    std::cout<<"Cantidad de articulo 5: "<<std::endl;
    std::cin>>a5;

    total=(a1*prec1) + (a2*prec2) + (a3*prec3) + (a4*prec4) + (a5*prec5);

    std::cout<<"Total a pagar "<<total;
    return 0;
}
